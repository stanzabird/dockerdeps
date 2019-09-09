from archlinux/base

# update system
run pacman -Syu --noconfirm

# get the dependencies
run pacman -Syu --noconfirm grep awk automake autoconf git make gcc boost

# build the package
run git clone https://github.com/stanzabird/dockerdeps.git
workdir dockerdeps
run autoreconf -i
run ./configure
run make
