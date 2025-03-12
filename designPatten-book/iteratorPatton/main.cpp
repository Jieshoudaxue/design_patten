#include <iostream>
#include "iterator.h"

using namespace std;

int main(void) {
    Aggregate* pa = new Aggregate();
    pa->setName("ycao");
    pa->setName("miao");
    pa->setName("jingwen");
    cout << pa->getIndex() << endl;


    Iterator* pi = new RealIterator(pa);
    cout << pi->getFirst() << endl;
    while (!pi->isDone()) {
        cout << pi->curItem() << " buy ticket" << endl;
        pi->next();
    }
    
    delete pa;
    delete pi;
    return 0;
}
