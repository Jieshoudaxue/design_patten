#include <iostream>
#include "class.h"

using namespace std;

int main(void) {
    C c;
    c.A::set(4);
    c.A::print();
    
    c.B::set(9);
    c.B::print();    

    E e;
    e.D1::set(5);
    e.D1::print();
    
    e.D2::set(8);
    e.D2::print();    

#if 0 
    e.set(50);
    e.print();
    e.A::set(60);
    e.A::print();
    e.D1::A::set(70);
    e.D1::A::print();
    e.D1::set(80);
    e.D1::print();
    e.D2::set(90);
    e.D2::print();
#endif
    
#if 1
    e.D1::A::set(7);    //error: ‘A’ is an ambiguous base of ‘E’
    e.print();          //error: request for member ‘print’ is ambiguous
#endif    
    return 0;
} 