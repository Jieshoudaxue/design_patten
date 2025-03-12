#include <iostream>
#include "class.h"

using namespace std;

void Animal::speak(void) {
    cout << "Animal::speak" << endl;
}

/*
void Dog::speak(void) {
    Animal::speak();
}
*/

void Dog::wang(void) {
    speak();
}