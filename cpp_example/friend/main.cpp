#include <iostream>
#include <string>
using namespace std;

class Person;

class Animal {
public:
    void eat(Person& rp);
};

class Earth {
public:
    void have(Person& rp);
};

class Person {
public:
    string name;
    
    Person() {}
    Person(string n, int h):name(n), hight(h) {}
    
    friend void showInfo(Person& rp);
    friend void Animal::eat(Person& rp);
    friend class Earth;
private:
    int hight;
};

void showInfo(Person& rp) {
    cout << "name = " << rp.name << endl;
    cout << "hight = " << rp.hight << endl;
}

void Animal::eat(Person& rp){
    cout << "animal eat person name = " << rp.name << " hight = " << rp.hight << endl;
}

void Earth::have(Person& rp) {
    cout << "earth have person name = " << rp.name << " hight = " << rp .hight << endl;
}

int main(void) {
    Person p("ycao", 185);
    showInfo(p);
    
    Animal a;
    a.eat(p);
    
    Earth e;
    e.have(p);
    
    return 0;
}