#include <iostream>
#include "command.h"

using namespace std;

int main(void) {
    Barbecuer* pb = new Barbecuer();

    Waiter* pw = new Waiter();

    Command* pc1 = new BakeMtn(pb);
    pw->setCmd(pc1);
    Command* pc2 = new BakeChk(pb);
    pw->setCmd(pc2);
    pw->notify();
    
    pw->cancelCmd(pc2);
    pw->notify();

    delete pb;
    delete pw;
    delete pc1;
    delete pc2;
    return 0;
}
