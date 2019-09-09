AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4
SUBDIRS = src

cleantar :
	make dist
	scp dockerdeps-0.1.0.tar.gz nine:pub
	(mkdir tmp ; cd tmp ; git clone ../../dockerdeps ; tar cf dockerdeps.tar dockerdeps ; scp dockerdeps.tar nine:pub ; cd .. ; rm -rf tmp)

fedora : cleantar
	sudo docker build deps/fedora
fedora-build : cleantar
	sudo docker build deps/fedora-build

debian : cleantar
	sudo docker build deps/debian
debian-build : cleantar
	sudo docker build deps/debian-build

arch : cleantar
	sudo docker build deps/arch
arch-build : cleantar
	sudo docker build deps/arch-build

deps : fedora fedora-build debian debian-build arch arch-build
