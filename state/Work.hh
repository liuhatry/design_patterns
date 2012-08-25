#ifndef WORK_HH
#define WORK_HH
#include "State.hh"
class Work{
	public:
		void SetState(State *);
		void SetHour(double);
		void SetFinished(bool);
		double GetHour();
		bool GetFinished();
		void WriteProgram();
	private:
		State *state_;
		double hour_;
		bool finished_;
};
#endif
