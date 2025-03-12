#include <iostream>
#include "man.h"
using namespace std;

void Man::print(void) {
    cout << "man print" << endl;
    Person::print();
}

void Man::speak(void) {
    cout << "man speak" << endl;
}
