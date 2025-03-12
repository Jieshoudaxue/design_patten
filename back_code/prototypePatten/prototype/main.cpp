#include <iostream>
#include "prototype.h"

using namespace std;

int main(void) {
    Resume *ra = new ResumeA("ycao");
    Resume *rb = new ResumeB("miao");

    ra->show();
    rb->show();

    Resume *ra1 = ra->clone();
    Resume *rb1 = rb->clone();
    ra1->show();
    rb1->show();
    ra1->destoryClone();
    rb1->destoryClone();

//    ra->destoryClone();
//    rb->destoryClone();
    delete ra;
    delete rb;

    //no polymorphic
    ResumeA a("ycao");
    ResumeB b("miao");
    a.show();
    b.show();

    ResumeA a1(a);
    ResumeB b1(b);
    a1.show();
    b1.show();    
    
    return 0;
}
