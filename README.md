dockerdeps
==========

This program is a simple c++ program that has a Boost dependency. The program however is not important and does not serve any function.

Dockerdeps is about the 'deps' folder, where Dockerfiles are located to build the (test) program from tarball and github HEAD under various well-known linux distributions.

The problem with autoconf and it's tarballs is that it does not do anything to help with the dependencies, these dependencies are expected to be handled by the one who compiles the source.

However, how are these dependencies called under my distro? What are the depencencies anyway? All this makes compiling a tarball more problematic than it has to be.

Docker to the rescue
--------------------

This program uses a slew of Dockerfiles to build under various flavors of linux, and serve as the documentation on how to build the program, either from distribution tarball, or from a git repo.

There are build Dockerfiles for:
--------------------------------

* arch
* debian
* fedora

The following derived distro's use:
* arch : manjaro
* debian : linux mint, ubuntu, manjaro, elementary os, ubuntu mate.
* fedora : opensuse, centos

Other unsuppoted builds:
* gentoo

Each distro docker build file comes in two flavors: 'distX' and 'distX-build'. The 'distX' Dockerfile builds the package from a tarball, and the 'distX-build' Dockerfile builds the package from a cloned git repo.


TODO
----
I'm thinking of expanding the project with the following features:
* 'distX-mingw64' docker build files to build for win64 using mingw64 cross-compilation.
* 'distX*/Dockerfile.in' to generate the names of the tarballs and the version number from autoconf.
