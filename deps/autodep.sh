#!/bin/sh

if [ -z "$1" ]; then
    echo "use: autodep.sh DISTRO"
    echo ""
    echo "  where DISTRO is one of the following:"
    echo "    arch, archlinux"
    echo "    debian"
    echo "    debian-mingw64"
    echo "    fedora"
    echo "    fedora-mingw64"
    echo ""
    exit 1
fi

case "$1" in
    arch | archlinux)
	pacman -Syu --noconfirm make gcc boost
	;;
    debian)
	apt-get -y install make g++ libboost-all-dev
	;;
    debian-mingw64)
	apt-get -y install make g++-mingw-w64-x86-64 mingw64-x86-64-boost
	;;
    fedora)
	dnf -y install make g++ boost-devel
	;;
    fedora-mingw64)
	dnf -y install make mingw64-gcc-c++ mingw64-boost
	;;
    *) echo "autodep.sh: error: arument not a valid DISTRO specifier"
       exit 1
esac
