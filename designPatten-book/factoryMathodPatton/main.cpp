#include <iostream>
#include "factoryMathod.h"

using namespace std;

int main(void) {
    IFactory* f = new AddFactory();
    Operation* ro = f->createOpr();
    ro->setNumAB(1.1, 2.2);
    cout << ro->getResult() << endl;

    delete ro;
    delete f;
    
    return 0;
}
