#include <iostream>
#include "command.h"

using namespace std;

int main(void) {
    Waiter* pw = new Waiter();
    BarbecueMaster* pm = new BarbecueMaster();

    Command* pc1 = new MakeChiken(pm);
    Command* pc2 = new MakeMutton(pm);

    pw->addCmd(pc1);
    pw->addCmd(pc2);
    pw->submitCmd();

    pw->rmCmd(pc1);
    pw->submitCmd();

    delete pw;
    delete pm;
    
    return 0;
}
