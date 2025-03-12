#include <iostream>
#include "class.h"

using namespace std;

int Calculation::cal() {
    cout << "Calculation::cal" << endl;
}

int Add::cal() {
    return (val1 + val2);
}

int Sub::cal() {
    return (val1 - val2);
}

int Mul::cal() {
    return (val1 * val2);
}