#include <iostream>
#include "factory.h"

using namespace std;

void SingleCoreA::show(void) {
    cout << "SingleCoreA" << endl;
}

void SingleCoreB::show(void) {
    cout << "SingleCoreB" << endl;
}

SingleCore* FactoryMethodA::produce() {
    return new SingleCoreA;
}

SingleCore* FactoryMethodB::produce() {
    return new SingleCoreB;
}

