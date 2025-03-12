#include <iostream>
#include "factory.h"

using namespace std;

void SingleCoreA::show(void) {
    cout << "SingleCoreA" << endl;
}

void SingleCoreB::show(void) {
    cout << "SingleCoreB" << endl;
}

SingleCore* SimpleFactory::produce(enum ChipType t) {    
    if (t == COREA) {
        return new SingleCoreA();    
    } else if (t == COREB) {
        return new SingleCoreB();
    } else {
        return NULL;
    }
}

