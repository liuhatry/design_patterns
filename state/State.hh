#ifndef STATE_HH
#define STATE_HH
class Work;
class State{
	public:
		virtual void WriteProgram(Work *)=0;
};
#endif
