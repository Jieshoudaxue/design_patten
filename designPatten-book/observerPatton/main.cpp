#include <iostream>
#include "observer.h"

using namespace std;

int main(void) {
    Subject* ps = new Boss();

    Observer* po1 = new StockObserver("ycao", ps);
    Observer* po2 = new NbaObserver("miao", ps);

    ps->attach(po1);
    ps->attach(po2);

    //ps->detach(po2);

    ps->setAction("i huhansan come back...");
    ps->notify();

    delete ps;
    delete po1;
    delete po2;
    return 0;
}
