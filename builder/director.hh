#ifndef DIRECTOR
#define DIRECTOR
#include "builder.hh"
#include <iostream>
using namespace std;
class director
{
	public:
		director(builder *);
		virtual ~director();
		void create();
		
	private:
		builder * builder_;
	protected:
	
};
#endif
