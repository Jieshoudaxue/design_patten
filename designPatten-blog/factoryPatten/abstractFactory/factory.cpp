#include <iostream>
#include "factory.h"

using namespace std;

void SingleCoreA::show(void) {
    cout << "SingleCoreA" << endl;
}

void SingleCoreB::show(void) {
    cout << "SingleCoreB" << endl;
}

void MultipleCoreA::show(void) {
    cout << "MultipleCoreA" << endl;
}

void MultipleCoreB::show(void) {
    cout << "MultipleCoreB" << endl;
}

SingleCore* FactoryA::produceSingleCore() {
    return new SingleCoreA;
}

MultipleCore* FactoryA::produceMultipleCore() {
    return new MultipleCoreA;
}

SingleCore* FactoryB::produceSingleCore() {
    return new SingleCoreB;
}

MultipleCore* FactoryB::produceMultipleCore() {
    return new MultipleCoreB;
}
