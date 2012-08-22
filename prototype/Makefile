prototype:main.o concretePrototype1.o workExperience.o
	g++ -o prototype main.o concretePrototype1.o workExperience.o
main.o:main.cc prototype.hh
	g++ -g -c main.cc
concretePrototype1.o:concretePrototype1.cc concretePrototype1.hh
	g++ -g -c concretePrototype1.cc
workExperience.o:workExperience.hh workExperience.cc
	g++ -g -c workExperience.cc
