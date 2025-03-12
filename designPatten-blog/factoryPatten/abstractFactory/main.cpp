#include <iostream>
#include "factory.h"

using namespace std;

int main(void) {
    AbstractFactory* af = new FactoryA();

    MultipleCore* mc = af->produceMultipleCore();
    mc->show();

    delete mc;
    delete af;

    return 0;
}    
