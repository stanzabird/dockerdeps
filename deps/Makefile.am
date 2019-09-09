EXTRA_DIST = debian-build/Dockerfile debian/Dockerfile arch-build/Dockerfile arch/Dockerfile \
 fedora/Dockerfile fedora-build/Dockerfile

.PHONY : all fedora fedora-build debian debian-build arch arch-build


cleantar :
	make -C .. dist
	scp ../dockerdeps-0.1.0.tar.gz nine:pub

fedora : cleantar
	sudo docker build fedora
fedora-build :
	sudo docker build fedora-build

debian : cleantar
	sudo docker build debian
debian-build :
	sudo docker build debian-build

arch : cleantar
	sudo docker build arch
arch-build :
	sudo docker build arch-build

all : fedora fedora-build debian debian-build arch arch-build
