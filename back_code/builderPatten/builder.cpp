#include <iostream>
#include "builder.h"

using namespace std;

void BuilderMan::buildeHead() {
    cout << "build man head" << endl;
}
void BuilderMan::buildeArm() {
    cout << "build man arm" << endl;
}
void BuilderMan::buildeBody() {
    cout << "build man body" << endl;
}
void BuilderMan::buildeLeg() {
    cout << "build man leg" << endl;
}

void BuilderWomen::buildeHead() {
    cout << "build Women head" << endl;
}
void BuilderWomen::buildeArm() {
    cout << "build Women arm" << endl;
}
void BuilderWomen::buildeBody() {
    cout << "build Women body" << endl;
}
void BuilderWomen::buildeLeg() {
    cout << "build Women leg" << endl;
}

void Director::create() {
    b->buildeHead();
    b->buildeArm();
    b->buildeBody();
    b->buildeLeg();    
}

