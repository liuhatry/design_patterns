observer:main.o Subject.o Boss.o Observer.o StockObserver.o
	g++ -o observer main.o Subject.o Boss.o Observer.o StockObserver.o
main.o:main.cc
	g++ -g -c main.cc
Subject.o:Subject.cc Subject.hh
	g++ -g -c Subject.cc
Boss.o:Boss.cc Boss.hh
	g++ -g -c Boss.cc
Observer.o:Observer.cc Observer.hh
	g++ -g -c Observer.cc
StockObserver.o:StockObserver.cc StockObserver.hh
	g++ -g -c StockObserver.cc
