#include <iostream>
#include "composite.h"

using namespace std;

int main(void) {
    Builder b;

    Company* c = b.create();

    c->show(0);
    
    c->destroy();
    
    return 0;
}
