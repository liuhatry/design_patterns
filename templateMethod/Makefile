template: TestPaper.o TestPaperA.o main.o
	g++ -o template main.o TestPaper.o TestPaperA.o 
main.o:main.cc
	g++ -g -c main.cc
TestPaper.o:TestPaper.hh TestPaper.cc
	g++ -g -c TestPaper.cc
TestPaperA.o:TestPaperA.hh TestPaperA.cc
	g++ -g -c TestPaperA.cc
