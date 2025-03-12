#include <iostream>
#include "class.h"

using namespace std;

int main(void) {    
    /*
    Add a(2, 3);
    Calculation *c = &a;
    
    cout << "a.cal = " << a.cal() << endl;
    cout << "c->cal = " << c->cal() << endl;
    */
    Calculation *c = new Add(2, 3);
    cout << "c->cal = " << c->cal() << endl;
    delete c;
    
    return 0;
}