from fedora:latest

# update system
run dnf -y update

# get the dependencies
run dnf -y install automake autoconf wget make g++ boost-devel

# build the package
run wget https://pub.stanzabird.nl/dockerdeps.tar
run tar xf dockerdeps.tar
workdir dockerdeps
run autoreconf -i
run ./configure
run make
