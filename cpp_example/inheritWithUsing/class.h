#ifndef _CLASS_H_
#define _CLASS_H_

#include <iostream>
using namespace std;

class Animal {
public:
    void speak(void);
    
};

class Dog: private Animal {
public:
    //void speak(void);
    void wang(void);
    using Animal::speak;
};


#endif