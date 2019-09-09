from fedora:latest

# update system
run dnf -y update

# get the dependencies
run dnf -y install wget make g++ boost-devel

# build the package
run wget https://github.com/stanzabird/dockerdeps/releases/download/v0.1.0/dockerdeps-0.1.0.tar.gz
run tar xf dockerdeps-0.1.0.tar.gz
workdir dockerdeps-0.1.0
run ./configure
run make

