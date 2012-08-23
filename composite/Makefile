composite:main.o Company.o ConcreteCompany.o FinanceDepartment.o HRDepartment.o
	g++ -o composite main.o Company.o ConcreteCompany.o FinanceDepartment.o HRDepartment.o
main.o:main.cc
	g++ -g -c main.cc
Company.o:Company.hh Company.cc
	g++ -g -c Company.cc
ConcreteCompany.o:ConcreteCompany.hh ConcreteCompany.cc
	g++ -g -c ConcreteCompany.cc
HRDepartment.o:HRDepartment.hh HRDepartment.cc
	g++ -g -c HRDepartment.cc
FinanceDepartment.o:FinanceDepartment.hh FinanceDepartment.cc
	g++ -g -c FinanceDepartment.cc
