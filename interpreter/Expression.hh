#ifndef EXPRESSION
#define EXPRESSION
#include <string>
#include "PlayContext.hh"
class Expression{
	public:
		virtual void Execute(string,string)=0;
		void Interpret(PlayContext *);
		
};
#endif
