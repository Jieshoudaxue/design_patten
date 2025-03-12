#ifndef _CHAINOFRESPONSIBILITY_H_
#define _CHAINOFRESPONSIBILITY_H_

#include <iostream>
#include <string>
using namespace std;

class Manager {
public:
    Manager() {
        m = NULL;
    }
    virtual ~Manager() {}

    Manager(Manager *pm, string n):m(pm), name(n) {}
    virtual void handleReq(string n, int num) = 0;
    
protected:
    Manager *m;
    string name;
};

class CommonManager : public Manager {
public:
    CommonManager() {}
    ~CommonManager() {}

    CommonManager(Manager *pm, string n):Manager(pm, n) {}
    void handleReq(string n, int num);

};

class Majordomo : public Manager {
public:
    Majordomo() {}
    ~Majordomo() {}

    Majordomo(Manager *pm, string n):Manager(pm, n) {}
    void handleReq(string n, int num);
};

class GeneralManager : public Manager {
public:
    GeneralManager() {}
    ~GeneralManager() {}

    GeneralManager(Manager *pm, string n):Manager(pm, n) {}
    void handleReq(string n, int num);
};


#endif
