#!/bin/sh

if [ -z "$1" ]; then
    echo "use: autodep.sh DISTRO"
    echo ""
    echo "  where DISTRO is one of the following:"
    echo "    arch"
    echo "    debian"
    echo "    fedora"
    echo "    fedora-mingw64"
fi

case "$1" in
    arch) pacman -Syu --noconfirm make gcc boost
	  ;;
    debian) apt-get -y install make g++ libboost-all-dev
	    ;;
    fedora) dnf -y install make g++ boost-devel
	    ;;
    fedora-mingw64) dnf -y install make mingw64-gcc-c++ mingw64-boost
		    ;;
esac

