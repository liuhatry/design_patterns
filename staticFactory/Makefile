operation:main.o operation.o operationFactory.o operationAdd.o operationSub.o operationMul.o operationDiv.o
	g++ -o  operation main.o operation.o operationFactory.o operationAdd.o operationSub.o operationMul.o operationDiv.o
main.o:main.cc
	g++ -c -g main.cc
operation.o:operation.cc operation.hh 
	g++ -c -g operation.cc 
operationFactory.o:operationFactory.cc operationFactory.hh 
	g++ -c -g operationFactory.cc 
operationAdd.o:operationAdd.cc operationAdd.hh
	g++ -c -g operationAdd.cc 
operationSub.o:operationSub.cc operationSub.hh
	g++ -c -g operationSub.cc 
operationMul.o:operationMul.cc operationMul.hh
	g++ -c -g operationMul.cc 
operationDiv.o:operationDiv.cc operationDiv.hh
	g++ -c -g operationDiv.cc 
