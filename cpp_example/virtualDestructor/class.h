#ifndef _CLASS_H_
#define _CLASS_H_

#include <iostream>
using namespace std;

class Calculation {
public:
    virtual int cal() = 0;
    
    Calculation() {
        cout << "Calculatio" << endl;
    }
    virtual ~Calculation() {
        cout << "~Calculation" << endl;
    }
    
private:

};

class Add : public Calculation {
public:
    int cal();
    
    Add(int a, int b) {
        val1 = a;
        val2 = b;
        cout << "Add(int a, int b)" << endl;
    }
    
    ~Add() {
        cout << "~Add" << endl;
    };
    
private:
    int val1;
    int val2;
    
};

class Sub : public Calculation {
public:
    int cal();

    Sub(int a, int b) {
        val1 = a;
        val2 = b;
    }
    
    ~Sub() {};
    
private:
    int val1;
    int val2;
    
};


#endif