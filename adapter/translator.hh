#ifndef TRANSLATOR
#define TRANSLATOR
#include "player.hh"
#include "foreignCenter.hh"
class translator:public player{
	public:
		translator(string name);
		virtual void attack();
		virtual void defense();
		virtual ~translator();
	private:
		foreignCenter *fc;
};
#endif
