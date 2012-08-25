#include "PlayContext.hh"
#include "Expression.hh"
#include "Note.hh"
#include "Scale.hh"

int main(){
	PlayContext *p = new PlayContext();
	p->SetText("O2E1F3G2O2A2D3D4O3G4D3B7");
	Expression *e;
	while((p->GetText()).length()>0)
	{
	string str = (p->GetText()).substr(0,1);
	if(str =="O")
		e=new Scale();
	else 
		e=new Note();
	e->Interpret(p);
	}
	return 0;
}
