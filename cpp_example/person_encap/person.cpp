#include <iostream>
#include "person.h"

using namespace std;

void MAN::Person::eat(void) {
    cout << this->name << " eat" << endl;
}

void MAN::Person::work(void) {
    if (this->male) {
        cout << this->name << " coding" << endl;
    } else {
        cout << this->name << " shopping" << endl;
    }
    
}

void MAN::Person::sleep(void) {
    cout << this->name << " sleep" << endl;
}

void MAN::Person::ageSet(int age) {
    this->age = age;
}
int MAN::Person::ageGet(void) const {
    //male = false;     //normally, const func of class can not change any parameters!
    this->age ++;       //age is mutalbe, so const func can change it!
    return this->age;
}

inline void MAN::Person::growUP(void) {
    this->age ++;
}

void MAN::Person::print(void) {
    eat();
    sleep();
    cout << "my name = " << name << endl;
    cout << "my age = " << age << endl;
    cout << "my male = " << male << endl;
    cout << "*pInt = " << *pInt << endl;
    cout << "------------" << endl;
}