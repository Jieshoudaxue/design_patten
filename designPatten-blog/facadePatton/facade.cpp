#include <iostream>
#include "facade.h"

using namespace std;

void Compiler::run() {
    cout << "run compiler" << endl;
    s.scan();
    p.parse();
    gi.genCode();
    ga.genCode();
}


