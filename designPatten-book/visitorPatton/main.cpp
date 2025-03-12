#include <iostream>
#include "visitor.h"

using namespace std;

int main(void) {
    BusinessReport* pbr = new BusinessReport();

    Visitor* pv1 = new CEOVisitor();
    Visitor* pv2 = new CTOVisitor();

    pbr->show(pv1);
    pbr->show(pv2);

    delete pbr;
    delete pv1;
    delete pv2;
    return 0;
}
