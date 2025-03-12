#include <iostream>
#include "adapter.h"

using namespace std;

int main(void) {
    Player* rp = new Forward("Tim Duncan");
    rp->attack();
    rp->defense();
    delete rp;

    Player* rp1 = new Translator("YaoMing");
    rp1->attack();
    rp1->defense();
    delete rp1;

    Player* rp2 = new Guards("Michael Jordan");
    rp2->attack();
    rp2->defense();
    delete rp2;

    
    return 0;
}
