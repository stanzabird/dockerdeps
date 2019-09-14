EXTRA_DIST = fedora-mingw64/zipwin.pl


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
	cp autodep.sh debian-tar
	sudo docker build -t @PACKAGE@/debian-tar debian-tar
	rm debian-tar/autodep.sh
debian-git :
	cp autodep.sh debian-git
	sudo docker build -t @PACKAGE@/debian-git debian-git
	rm debian-git/autodep.sh

fedora-tar :
	cp autodep.sh fedora-tar
	sudo docker build -t @PACKAGE@/fedora-tar fedora-tar
	rm fedora-tar/autodep.sh
fedora-git :
	cp autodep.sh fedora-git
	sudo docker build -t @PACKAGE@/fedora-git fedora-git
	rm fedora-git/autodep.sh
fedora-mingw64 :
	cp autodep.sh stanzabird.ico @PACKAGE@.nsi zipwin.pl fedora-mingw64
	sudo docker build -t @PACKAGE@/fedora-mingw64 fedora-mingw64
	rm fedora-mingw64/autodep.sh fedora-mingw64/stanzabird.ico fedora-mingw64/@PACKAGE@.nsi fedora-mingw64/zipwin.pl

deps : arch-tar arch-git debian-tar debian-git fedora-tar fedora-git fedora-mingw64

rmi :
	sudo docker rmi @PACKAGE@/arch-git @PACKAGE@/arch-tar @PACKAGE@/fedora-git @PACKAGE@/fedora-tar @PACKAGE@/fedora-mingw64 @PACKAGE@/debian-git @PACKAGE@/debian-tar
