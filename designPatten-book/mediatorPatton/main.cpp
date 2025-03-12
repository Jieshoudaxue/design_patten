#include <iostream>
#include "mediator.h"

using namespace std;

int main(void) {
    Unsc* pu = new Unsc();

    Country* pc1 = new Usa(pu);
    Country* pc2 = new Iraq(pu);

    pu->setUsa(pc1);
    pu->setIraq(pc2);

    pc1->declare("Don't play with nuclear weapons or you'll be hit");
    pc2->declare("You just want oil. I'm not afraid of war");

    delete pu;
    delete pc1;
    delete pc2;
    return 0;
}
