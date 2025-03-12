#include <iostream>
#include "person.h"

using namespace MAN;

//if showAge parameter is const, then p.ageGet() must be const!
void showAge(const Person& p) {
    std::cout << "person age = " << p.ageGet() << endl;
    
}

int main(void) {
    string s1 = "ycao";
    Person p1("ycao", 28, true);
    p1.print();
    p1.ageSet(38);
    p1.print();
    
    showAge(p1);
    
    string s = "ycao linux";
    Person *p2 = new Person(s);
    
    p2->eat();
    p2->work();
    p2->sleep();
    p2->print();
    delete p2;
    
    *p1.pInt = 22;
    Person p3(p1);
    p3.print();
    
    return 0;
}
