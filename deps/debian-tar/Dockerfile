from debian

# update system
run apt-get -y update
run apt-get -y upgrade

# get the dependencies
run apt-get -y install wget
copy autodep.sh .
run ./autodep.sh debian

# build the package
run wget https://github.com/stanzabird/dockerdeps/releases/download/v0.1.0/dockerdeps-0.1.0.tar.gz
run tar xf dockerdeps-0.1.0.tar.gz
workdir dockerdeps-0.1.0
run ./configure
run make
run make check
