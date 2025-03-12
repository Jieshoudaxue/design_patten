#include <iostream>
#include "builder.h"

using namespace std;

int main(void) {
    Director* pd = new Director();
    Builder* b = new PersonBuilder("build ycao: ");

    Person p = pd->construct(b);
    p.toString();

    delete pd;
    delete b;
    
    return 0;
}
