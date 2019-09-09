EXTRA_DIST = debian-build/Dockerfile debian/Dockerfile arch-build/Dockerfile arch/Dockerfile \
 fedora/Dockerfile fedora-build/Dockerfile


.PHONY : deps fedora fedora-build debian debian-build arch arch-build


arch :
	sudo docker build arch
arch-build :
	sudo docker build arch-build

debian :
	sudo docker build debian
debian-build :
	sudo docker build debian-build

fedora :
	sudo docker build fedora
fedora-build :
	sudo docker build fedora-build


deps : arch arch-build debian debian-build fedora fedora-build
