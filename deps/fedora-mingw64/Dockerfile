from fedora

# update system
run dnf -y update
run dnf -y install openssh

# get the dependencies
run dnf -y install automake autoconf git make mingw64-gcc-c++ mingw64-boost

# build the package
run git clone https://github.com/stanzabird/dockerdeps.git
workdir dockerdeps
run autoreconf -i
#run mingw64-configure --with-boost-libdir=/usr/lib/x86_64-linux-gnu
run mingw64-configure --with-boost=/usr/x86_64-w64-mingw32/sys-root/mingw
run make
