adapter:main.o player.o forwards.o foreignCenter.o translator.o
	g++ -o adapter main.o player.o forwards.o foreignCenter.o translator.o
main.o:main.cc
	g++ -g -c main.cc
player.o:player.cc player.hh
	g++ -g -c player.cc
forwards.o:forwards.cc forwards.hh
	g++ -g -c forwards.cc
foreignCenter.o:foreignCenter.cc foreignCenter.hh
	g++ -g -c foreignCenter.cc
translater.o:translator.cc translator.hh
	g++ -g -c translator.cc
