from archlinux/base

# update system
run pacman -Syu --noconfirm

# get the dependencies
run pacman -Syu --noconfirm grep awk automake autoconf wget make gcc boost

# build the package
run wget https://pub.stanzabird.nl/dockerdeps.tar
run tar xf dockerdeps.tar
workdir dockerdeps
run autoreconf -i
run ./configure
run make
