#include <iostream>
#include "facade.h"

using namespace std;

int main(void) {
    Fund* f = new Fund();
    f->buy();
    f->sell();
    delete f;
    
    return 0;
}
