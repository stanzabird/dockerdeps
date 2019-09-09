AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4
SUBDIRS = src deps

arch :
	make -C deps arch
arch-build :
	make -C deps arch-build
debian : 
	make -C deps debian
debian-build :
	make -C deps debian-build
fedora :
	make -C deps fedora
fedora-build :
	make -C deps fedora-build

deps-all :
	make -C deps deps

