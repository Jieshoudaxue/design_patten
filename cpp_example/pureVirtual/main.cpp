#include <iostream>
#include "class.h"

using namespace std;

int calculator(Calculation &pc) {
    return pc.cal();
}

int main(void) {    
    Add a(2, 3);
    cout << "a.cal() = " << a.cal() << endl;
    Sub s(2, 3);
    cout << "s.cal() = " << s.cal() << endl;
    
    Calculation *pc = &a;
    cout << "pc->cal() = " << pc->cal() << endl;
    pc = &s;
    cout << "pc->cal() = " << pc->cal() << endl;
    
    cout << "Add calculator = " << calculator(a) << endl;
    cout << "Sub calculator = " << calculator(s) << endl;
    
    
    
    return 0;
}