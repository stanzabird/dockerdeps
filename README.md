dockerdeps
==========

This program is a simple c++ program that has a Boost dependency. The program however is not important and does not serve any function.

Dockerdeps is about the 'deps' folder, where Dockerfiles are located to build the (test) program under various well-known linux distributions (arch, debian, fedora).

The canonical way to install autoconf projects is usually:

```
tar xf myprog-1.0.0.tar.gz
cd myprog-1.0.0
./configure
make
sudo make install
```

The problem with autoconf and it's tarballs is that it does not do anything to help with the dependencies, these dependencies are expected to be handled by the one who compiles the source.

However, how are these dependencies called under my distro? What are the depencencies anyway? All this makes compiling a tarball more problematic than it has to be.

Docker to the rescue
--------------------

This program uses a slew of Dockerfiles to build under various flavors of linux, and serve as the documentation on how to build the program, either from distribution tarball, or from a git repo.

The good part of using docker is that really all dependencies have to be specified to the package manager or the build of the docker image will fail. For archlinux, I found I had to specify 'grep' because the ./configure script needs it and it's not in the archlinux/base image :) So this allows you to have a README.md in your program that specifies the commandline for the relevant distro's and help your user a lot with building the program quickly.

There are build Dockerfiles for:
--------------------------------

* arch
* debian
* fedora

The following derived distro's use:
* arch : manjaro
* debian : linux mint, ubuntu, manjaro, elementary os, ubuntu mate.
* fedora : opensuse, centos

Currently unsupported distro's:
* gentoo

Each distro docker build file comes in three flavors: 'distX-tar', 'distX-git' and 'distX-mingw64'. The 'distX-tar' Dockerfile builds the package from a tarball, the 'distX-git' Dockerfile builds the package from a cloned git repo. And finally, 'distX-mingw64' cross-compiles the package into a win64 installer.

So you wanna build this thing?
------------------------------

1) What you need is (a vm with) docker installed.
2) You need to know how to use docker and remove images that you no longer need.
3) You need to install the depencencies needed to build the test program (they are found in the relevant Dockerfile).
4) Configure the program.
5) Finally, do 'make deps'. This will build *all* the docker images (takes almost 3 hours on my laptop). It takes 20GB diskspace, with 10GB for arch-mingw64. To build without arch-mingw64, run make deps-no-arch-mingw64 (40 minutes).

The problem on arch is that there are no packages for mingw on it, and AUR has some binary packages for the mingw compiler, but boost needs to be built from source, ugh.

To remove the built images, issue a 'make rmi' command in the 'deps' folder.

And as a reminder, to run a shell in one of the containers, just issue:
```bash
docker run --rm -it dockerdeps/debian-tar bash
```
To get a file out of a running container, for example to get a win64 binary, you can go
```bash
docker cp happy_container:/dockerdeps/dockerdeps-0.1.0-win64.zip .
```

TODO
----
I'm thinking of expanding the project with the following features:
* 'distX-pkg' docker build files to build distribution files for each distro. (deb, rpm)

