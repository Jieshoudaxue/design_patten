#include <iostream>
#include "factory.h"

using namespace std;

int main(void) {
    FactoryMethod* fm = new FactoryMethodA();

    SingleCore *sc = fm->produce();
    sc->show();

    delete sc;

    delete fm;

    return 0;
}    
