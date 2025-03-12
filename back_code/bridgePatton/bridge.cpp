#include <iostream>
#include "bridge.h"

using namespace std;

void Windows::inputOs() {
    cout << "install windows" << endl;
}

void Linux::inputOs() {
    cout << "install Linux" << endl;
}

void MacOs::inputOs() {
    cout << "install MacOs" << endl;
}


void Lenovo::installOs(Os* os) {
    cout << "in Lenovo, ";
    os->inputOs();
}

void Apple::installOs(Os* os) {
    cout << "in Apple, ";
    os->inputOs();
}

void Hp::installOs(Os* os) {
    cout << "in Hp, ";
    os->inputOs();
}

