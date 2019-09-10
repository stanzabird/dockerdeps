from archlinux/base

# update system
run pacman -Syu --noconfirm

# get the dependencies
run pacman -Syu --noconfirm grep awk wget
copy autodep.sh .
run ./autodep.sh arch

# build the package
run wget https://github.com/stanzabird/dockerdeps/releases/download/v0.1.0/dockerdeps-0.1.0.tar.gz
run tar xf dockerdeps-0.1.0.tar.gz
workdir dockerdeps-0.1.0
run ./configure
run make
run make check

