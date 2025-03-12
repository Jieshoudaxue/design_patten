#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person() {}
    Person(string n, int h):name(n), hight(h) {}
    void show();
private:
    string name;
    int hight;
};

class Animal {
public:
    Animal(Person* rp):p(rp) {}
    void eat();
    
private:
    Person* p;
};

void Person::show() {
    cout << "person name = " << name << " hight = " << hight << endl;
}

void Animal::eat(){
    p->show();
    
}

int main(void) {
    Person p("ycao", 185);
    
    Animal a(&p);
    a.eat();
    
    return 0;
}