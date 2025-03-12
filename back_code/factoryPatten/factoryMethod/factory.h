#ifndef _FACTORY_H_
#define _FACTORY_H_

#include <iostream>
using namespace std;

enum ChipType {COREA, COREB};

class SingleCore {
public:
    virtual void show() = 0;

    virtual ~SingleCore() {};
};

class SingleCoreA : public SingleCore {
public:
    void show(void);
};

class SingleCoreB : public SingleCore {
public:
    void show(void);

};

class FactoryMethod {
public:
    virtual SingleCore* produce() = 0;

    virtual ~FactoryMethod() {};
};

class FactoryMethodA : public FactoryMethod {
public:
    SingleCore* produce();

};

class FactoryMethodB : public FactoryMethod {
public:
    SingleCore* produce();
};

#endif