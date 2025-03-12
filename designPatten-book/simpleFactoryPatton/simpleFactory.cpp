#include <iostream>
#include "simpleFactory.h"

using namespace std;

Operation* OperationFactory::produce(string po) {
    if (po == "+") {
        return new Add();
    } else if (po == "-") {
        return new Sub();
    } else if (po == "*") {
        return new Mul();
    } else {
        return new Div();
    }
}

