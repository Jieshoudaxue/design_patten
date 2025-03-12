#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include <string>
using namespace std;

class Person {
public:
    Person() {}
    Person(string n):name(n) {}
    virtual ~Person() {}
    
    virtual void show() {
        cout << name << " wears ";
    }

private:
    string name;
};

class Finery : public Person {
public:
    Finery() {
        ycao = NULL;
    }
    Finery(Person* ry):ycao(ry) {}

    void show() {
        if (ycao != NULL) {
            ycao->show();
        }
    }

private:
    Person* ycao;
};

class TShirts : public Finery {
public:
    TShirts() {}
    TShirts(Person* rp):Finery(rp) {}

    void show() {
        Finery::show();
        cout << "big T shirts" << endl;;
    }
};

class BigTrouser : public Finery {
public:
    BigTrouser() {}
    BigTrouser(Person* rp):Finery(rp) {}

    void show() {
        Finery::show();
        cout << "big Trouser" << endl;;
    }
};

class UglyShooes : public Finery {
public:
    UglyShooes() {}
    UglyShooes(Person* rp):Finery(rp) {}
    
    void show() {
        Finery::show();
        cout << "Ugly shooes" << endl;;
    }
};


#endif
