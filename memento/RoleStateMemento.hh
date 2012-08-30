#ifndef ROLE_STATE_MEMENTO_HH
#define ROLE_STATE_MEMENTO_HH
class RoleStateMemento{
	public:
		RoleStateMemento(int,int,int);
		int getVit();
		int getAtk();
		int getDef();
	private:
		int vit_;
		int atk_;
		int def_;
};
#endif
