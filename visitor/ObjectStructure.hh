#ifndef OBJECT_STRUCTURE_HH
#define OBJECT_STRUCTURE_HH
#include "Person.hh"
#include "Action.hh"
class ObjectStructure{
	public:
		void Display(Action *);
		ObjectStructure(Person*,Person*);

	private:
		Person * man_;
		Person * woman_;
};
#endif

