director:main.o director.o builder.o fatBuilder.o thinBuilder.o
	g++ -o  director main.o director.o builder.o fatBuilder.o thinBuilder.o
main.o:main.cc
	g++ -c -g main.cc
director.o:director.cc director.hh 
	g++ -c -g director.cc 
builder.o:builder.cc builder.hh 
	g++ -c -g builder.cc 
fatBuilder.o:fatBuilder.cc fatBuilder.hh
	g++ -c -g fatBuilder.cc 
thinBuilder.o:thinBuilder.cc thinBuilder.hh
	g++ -c -g thinBuilder.cc 
