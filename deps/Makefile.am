EXTRA_DIST = debian-git debian-tar arch-git arch-tar/Dockerfile \
	fedora-tar fedora-git fedora-mingw64


.PHONY : deps fedora-tar fedora-git fedora-mingw64 debian-tar debian-git arch-tar arch-git


arch-tar :
	cp autodep.sh arch-tar
	sudo docker build -t @PACKAGE@/arch-tar arch-tar
	rm arch-tar/autodep.sh
arch-git :
	cp autodep.sh arch-git
	sudo docker build -t @PACKAGE@/arch-git arch-git
	rm arch-git/autodep.sh

debian-tar :
	sudo docker build -t @PACKAGE@/debian-tar debian-tar
debian-git :
	sudo docker build -t @PACKAGE@/debian-git debian-git

fedora-tar :
	sudo docker build -t @PACKAGE@/fedora-tar fedora-tar
fedora-git :
	sudo docker build -t @PACKAGE@/fedora-git fedora-git
fedora-mingw64 :
	sudo docker build -t @PACKAGE@/fedora-mingw64 fedora-mingw64

deps : arch-tar arch-git debian-tar debian-git fedora-tar fedora-git fedora-mingw64

rmi :
	sudo docker rmi @PACKAGE@/arch-git @PACKAGE@/arch-tar @PACKAGE@/fedora-git @PACKAGE@/fedora-tar @PACKAGE@/fedora-mingw64 @PACKAGE@/debian-git @PACKAGE@/debian-tar
