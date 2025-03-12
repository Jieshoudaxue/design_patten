#ifndef _FACTORY_H_
#define _FACTORY_H_

#include <iostream>
using namespace std;

//SingleCore
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

//MultipleCore
class MultipleCore {
public:
    virtual void show() = 0;

    virtual ~MultipleCore() {};
};

class MultipleCoreA : public MultipleCore {
public:
    void show(void);
};

class MultipleCoreB : public MultipleCore {
public:
    void show(void);

};

//AbstractFactory
class AbstractFactory {
public:
    virtual SingleCore* produceSingleCore() = 0;
    virtual MultipleCore* produceMultipleCore() = 0;

    virtual ~AbstractFactory() {};
};

class FactoryA : public AbstractFactory {
public:
    SingleCore* produceSingleCore();
    MultipleCore* produceMultipleCore();

};

class FactoryB : public AbstractFactory {
public:
    SingleCore* produceSingleCore();
    MultipleCore* produceMultipleCore();

};

#endif
