from fedora

# update system
run dnf -y update

# get the dependencies
run dnf -y install automake autoconf git
copy autodep.sh .
run ./autodep.sh fedora

# build the package
run git clone https://github.com/stanzabird/dockerdeps.git
workdir dockerdeps
run autoreconf -i
run ./configure
run make
run make check
