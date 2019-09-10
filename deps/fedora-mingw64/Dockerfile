from fedora

# update system
run dnf -y update

# get the dependencies
run dnf -y install automake autoconf git make mingw64-gcc-c++ mingw64-boost

# build the package
run git clone https://github.com/stanzabird/dockerdeps.git
workdir dockerdeps
run autoreconf -i
env LIBS=-lwsock32
run mingw64-configure --with-boost=/usr/x86_64-w64-mingw32/sys-root/mingw --prefix=/OUTPUT
run make

# make a zip file of the executable and all it's .dll dependencies
run dnf -y install zip
copy zipwin.pl .
run ./zipwin.pl 64 src/dockerdeps.exe
run mv src/dockerdeps-win64.zip .
