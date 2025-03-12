#include <iostream>
#include "factory.h"

using namespace std;

int main(void) {

    SimpleFactory f;

    SingleCore* sc = f.produce(COREA);
    sc->show();

    delete sc;
    return 0;
}    
