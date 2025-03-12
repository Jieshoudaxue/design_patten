#ifndef _CLASS_H_
#define _CLASS_H_

class A {
public:
    void set(int val);
    void print(void);
    
    
private:
    int value;

};

class B {
public:
    void set(int val);
    void print(void);
    
    
private:
    int value;

};

class C: public A, public B {
    
};

#if 0
class D1: virtual public A {
public:
    void set(int val);
    void print(void);
    
};

class D2: virtual public A {
    
};
#endif

#if 1
class D1: public A {
public:
    void set(int val);
    void print(void);
    
};

class D2: public A {
    
};
#endif

class E: public D1, public D2 {
    
};


#endif