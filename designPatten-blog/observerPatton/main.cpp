#include <iostream>
#include "observer.h"

using namespace std;

int main(void) {
    Blog* b = new Csdn("1641395022@qq.com");
    Observer* o = new Observer("ycao", b);
    Observer* o1 = new Observer("miao", b);

    b->attach(o);
    b->attach(o1);
    b->setStatus(" publishes a article\n");
    b->notify();


    delete b;
    delete o;    
    delete o1;
    return 0;
}
