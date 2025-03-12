#include <iostream>
#include "person.h"
#include "man.h"

int main(void) {
    Man m1("ycao");
    Person p1 = m1;
    p1.print();
    
    Person *p = &m1;
    p->print();
    
    Person &pn1 = m1;
    pn1.print();
    //pn1.speak();
    
    m1.Person::print();
    m1.print();
    
    //Man m2 = p1;
    
    double b = 3.3;
    int a = b;
    return 0;
}
