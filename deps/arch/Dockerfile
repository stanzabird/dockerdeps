from archlinux/base

# update system
run pacman -Syu --noconfirm

# get the dependencies
run pacman -Syu --noconfirm grep awk wget make gcc boost

# build the package
run wget https://pub.stanzabird.nl/dockerdeps-0.1.0.tar.gz
run tar xf dockerdeps-0.1.0.tar.gz
workdir dockerdeps-0.1.0
run ./configure
run make
