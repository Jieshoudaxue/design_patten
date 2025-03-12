#include <iostream>
#include "decorator.h"

using namespace std;

int main(void) {
    Phone* p = new Nokia("Nokia 6300");
    Decorator* d = new DecoratorA(p);
    d->showDecorate();

    delete d;
    delete p;

    Phone* p1 = new Iphone("Iphone4");
    Decorator* d1 = new DecoratorB(p1);
    d1->showDecorate();

    delete d1;
    delete p;

    
    return 0;
}
