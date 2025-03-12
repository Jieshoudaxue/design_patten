#include <iostream>
#include "simpleFactory.h"

using namespace std;

int main(void) {
    OperationFactory f;

    Operation* po = f.produce("+");
    po->setNumAB(3.6, 1.2);
    
    cout << "result = " << po->getResult() << endl;
    delete po;

    return 0;
}
