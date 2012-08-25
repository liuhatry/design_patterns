#ifndef MANAGER_HH
#define MANAGER_HH
#include "Request.hh"
class Manager{
	public:
		Manager(string name);
		void SetSuperior(Manager*);
		virtual void RequestApplications(Request*)=0;
	protected:
		string name_;
		Manager *superior_;
};
#endif
