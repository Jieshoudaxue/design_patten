#include <iostream>
#include "composite.h"

using namespace std;

int main(void) {
    Company* pc = new Composite("总部");
    Company* pc1 = new HR("总部人事");
    Company* pc2 = new Finance("总部财务");
    pc->add(pc1);
    pc->add(pc2);

    Company* pcc = new Composite("南京分部");
    Company* pcc1 = new HR("南京分部人事");
    Company* pcc2 = new Finance("南京分部财务");
    pc->add(pcc);
    
    pcc->add(pcc1);
    pcc->add(pcc2);

    pc->display(0);
    pc->duty();
    delete pc;
    delete pc1;
    delete pc2;
    delete pcc;
    delete pcc1;
    delete pcc2;
    
    return 0;
}
