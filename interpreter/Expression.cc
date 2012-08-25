#include "Expression.hh"
void Expression::Interpret(PlayContext *p){
	string playKey=(p->GetText()).substr(0,1);
	string playValue=(p->GetText()).substr(1,1);
	p->SetText((p->GetText()).substr(2));
	Execute(playKey,playValue);
}


