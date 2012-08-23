bridge:main.o HandsetBrandNokia.o HandsetGame.o HandsetAddressList.o
	g++ -o bridge main.o  HandsetBrandNokia.o HandsetGame.o HandsetAddressList.o
main.o:main.cc
	g++ -g -c main.cc
HandsetBrandNokia.o:HandsetBrandNokia.hh HandsetBrandNokia.cc HandsetBrand.hh
	g++ -g -c HandsetBrandNokia.cc
HandsetGame.o:HandsetGame.hh HandsetGame.cc HandsetSoft.hh
	g++ -g -c HandsetGame.cc
HandsetAddressList.o:HandsetAddressList.hh HandsetAddressList.cc HandsetSoft.hh
	g++ -g -c HandsetAddressList.cc

