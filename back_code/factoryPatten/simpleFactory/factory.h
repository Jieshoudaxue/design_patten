#ifndef _FACTORY_H_
#define _FACTORY_H_

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

class SimpleFactory {
public:
    SingleCore* produce(enum ChipType t);

};

#endif