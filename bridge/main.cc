#include "HandsetSoft.hh"
#include "HandsetBrand.hh"
#include "HandsetGame.hh"
#include "HandsetAddressList.hh"
#include "HandsetBrandNokia.hh"

int main(){
	HandsetSoft * soft1 = new HandsetGame();
	HandsetSoft * soft2 = new HandsetAddressList();
	HandsetBrand * nokia = new HandsetBrandNokia(soft1);
	nokia->run();
	nokia->setSoft(soft2);
	nokia->run();
	delete nokia;
	delete soft1;
	delete soft2;
	return 0;
}
