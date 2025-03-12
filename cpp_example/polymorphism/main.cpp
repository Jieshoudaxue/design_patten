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
    Mul m(2, 3);
    cout << "m.cal() = " << m.cal() << endl;

    Calculation c = a;
    c.cal();
    c = s;
    c.cal();
    c = m;
    c.cal();
    
    Calculation *pc = &a;
    cout << "pc->cal() = " << pc->cal() << endl;
    pc = &s;
    cout << "pc->cal() = " << pc->cal() << endl;
    pc = &m;
    cout << "pc->cal() = " << pc->cal() << endl;
    
    cout << "Add calculator = " << calculator(a) << endl;
    cout << "Sub calculator = " << calculator(s) << endl;
    cout << "Mul calculator = " << calculator(m) << endl;
    
    
    return 0;
}