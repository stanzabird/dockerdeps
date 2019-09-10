from debian

# update system
run apt-get -y update
run apt-get -y upgrade

# get the dependencies
run apt-get -y install automake autoconf git
copy autodep.sh .
run ./autodep.sh debian

# build the package
run git clone https://github.com/stanzabird/dockerdeps.git
workdir dockerdeps
run autoreconf -i
run ./configure
run make
run make check
