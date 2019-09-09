cleantar :
	make -C .. dist
	scp ../dockerdeps-0.1.0.tar.gz nine:pub
	(mkdir tmp ; cd tmp ; git clone ../../dockerdeps ; tar cf dockerdeps.tar dockerdeps ; scp dockerdeps.tar nine:pub ; cd .. ; rm -rf tmp)

fedora : cleantar
	sudo docker build fedora
fedora-build : cleantar
	sudo docker build fedora-build

debian : cleantar
	sudo docker build debian
debian-build : cleantar
	sudo docker build debian-build

arch : cleantar
	sudo docker build arch
arch-build : cleantar
	sudo docker build arch-build

deps : fedora fedora-build debian debian-build arch arch-build
