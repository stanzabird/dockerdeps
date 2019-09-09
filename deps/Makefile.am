EXTRA_DIST = debian-build/Dockerfile debian/Dockerfile arch-build/Dockerfile arch/Dockerfile \
 fedora/Dockerfile fedora-build/Dockerfile


.PHONY : deps fedora fedora-build debian debian-build arch arch-build


fedora :
	sudo docker build fedora
fedora-build :
	sudo docker build fedora-build

debian :
	sudo docker build debian
debian-build :
	sudo docker build debian-build

arch :
	sudo docker build arch
arch-build :
	sudo docker build arch-build


deps : fedora fedora-build debian debian-build arch arch-build
