#include <iostream>
#include "visitor.h"

using namespace std;

void Engineer::accept(Visitor *pv) {
    pv->visit(this);
}

void Manager::accept(Visitor *pv) {
    pv->visit(this);
}

