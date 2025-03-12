#include <iostream>
#include "prototype.h"

using namespace std;

//ResumeA
Resume* ResumeA::clone() {
    return new ResumeA(*this);
}

void ResumeA::destoryClone() {
    delete this;
}

void ResumeA::show() {
    cout << "ResumeA name = " << name << endl;
}

//ResumeB
Resume* ResumeB::clone() {
    return new ResumeB(*this);
}

void ResumeB::destoryClone() {
    delete this;
}

void ResumeB::show() {
    cout << "ResumeB name = " << name << endl;
}


