#include <iostream>
#include "decorator.h"

using namespace std;

int main(void) {
    Person* p = new Person("ycao");

    Finery* f = new TShirts(p);
    f->show();

    f = new BigTrouser(p);
    f->show();

    delete p;
    delete f;
    
    return 0;
}
