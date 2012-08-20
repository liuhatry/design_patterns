#ifndef OPERATION
#define OPERATION
class operation
{
	public:
		operation();
		virtual	double getResult()=0;
		virtual ~operation();
		void setNumA(double a);
		void setNumB(double b);
	protected:
		double numA;
		double numB;
	
};
#endif
