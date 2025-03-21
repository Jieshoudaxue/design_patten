#ifndef _CLASS_H_
#define _CLASS_H_

class Calculation {
public:
    virtual int cal();
    
private:

};

class Add : public Calculation {
public:
    int cal();
    
    Add(int a, int b) {
        val1 = a;
        val2 = b;
    }
    
    ~Add() {};
    
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

class Mul : public Calculation {
public:
    int cal();

    Mul(int a, int b) {
        val1 = a;
        val2 = b;
    }
    
    ~Mul() {};
    
private:
    int val1;
    int val2;
    
};




#endif