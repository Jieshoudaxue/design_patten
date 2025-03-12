#include <iostream>
#include "chain.h"

using namespace std;

int main(void) {
    Manager* pc = new CommonManager("zhangsan");
    Manager* pm = new Majordomo("zhangsan");
    Manager* pg = new GeneralManager("zhangsan");    
    pc->setSuperior(pm);
    pm->setSuperior(pg);
    
    pc->request(1);
    pc->request(3);
    pc->request(10);



    delete pc;
    delete pm;
    delete pg;
    return 0;
}
