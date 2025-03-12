#include <iostream>
#include "class.h"

using namespace std;

void A::set(int val) {
    value = val;
}

void A::print(void) {
    cout << "A::value = " << value << endl;
}

void B::set(int val) {
    value = val;
}

void B::print(void) {
    cout << "B::value = " << value << endl;
}

void D1::set(int val) {
    cout << "D1::set" << endl;
}

void D1::print(void) {
    cout << "D1::print" << endl;
}