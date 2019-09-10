EXTRA_DIST = debian-git debian-tar arch-git arch-tar/Dockerfile \
	fedora-tar fedora-git fedora-mingw64


.PHONY : deps fedora-tar fedora-git fedora-mingw64 debian-tar debian-git arch-tar arch-git


arch-tar :
	sudo docker build -t dockerdeps/arch-tar arch-tar
arch-git :
	sudo docker build -t dockerdeps/arch-git arch-git

debian-tar :
	sudo docker build -t dockerdeps/debian-tar debian-tar
debian-git :
	sudo docker build -t dockerdeps/debian-git debian-git

fedora-tar :
	sudo docker build -t dockerdeps/fedora-tar fedora-tar
fedora-git :
	sudo docker build -t dockerdeps/fedora-git fedora-git
fedora-mingw64 :
	sudo docker build -t dockerdeps/fedora-mingw64 fedora-mingw64

deps : arch-tar arch-git debian-tar debian-git fedora-tar fedora-git fedora-mingw64

rmi :
	sudo docker rmi dockerdeps/arch-git dockerdeps/arch-tar dockerdeps/fedora-git dockerdeps/fedora-tar dockerdeps/fedora-mingw64 dockerdeps/debian-git dockerdeps/debian-tar
