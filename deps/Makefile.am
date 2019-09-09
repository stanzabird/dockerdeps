EXTRA_DIST = debian-build/Dockerfile debian/Dockerfile arch-build/Dockerfile arch/Dockerfile \
 fedora/Dockerfile fedora-build/Dockerfile


.PHONY : deps fedora fedora-build debian debian-build arch arch-build


arch :
	sudo docker build -t dockerdeps/arch arch
arch-build :
	sudo docker build -t dockerdeps/arch-build arch-build

debian :
	sudo docker build -t dockerdeps/debian debian
debian-build :
	sudo docker build -t dockerdeps/debian-build debian-build

fedora :
	sudo docker build -t dockerdeps/fedora fedora
fedora-build :
	sudo docker build -t dockerdeps/fedora-build fedora-build


deps : arch arch-build debian debian-build fedora fedora-build
