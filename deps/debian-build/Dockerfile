from debian:latest

# update system
run apt-get -y update
run apt-get -y upgrade

# get the dependencies
run apt-get -y install automake autoconf wget make g++ libboost-all-dev

# build the package
run wget https://pub.stanzabird.nl/dockerdeps.tar
run tar xf dockerdeps.tar
workdir dockerdeps
run autoreconf -i
run ./configure
run make
