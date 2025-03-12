#include <iostream>
#include "builder.h"

using namespace std;

int main(void) {
    Builder* b = new BuilderMan();

    Director* d = new Director(b);
    d->create();

    delete d;
    delete b;
    return 0;
}
