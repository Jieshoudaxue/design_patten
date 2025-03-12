#ifndef _PROXY_H_
#define _PROXY_H_

#include <iostream>
using namespace std;

class IGiveGift {
public:
    IGiveGift() {}
    virtual ~IGiveGift() {}

    virtual void giveDolls() = 0;
    virtual void giveFlowers() = 0;
    virtual void giveChocolate() = 0;
};

class Pursuit : public IGiveGift {
public:
    Pursuit() {}
    Pursuit(string s):name(s) {}

    void giveDolls() {
        cout << "send dolls to " << name << endl;
    }
    void giveFlowers() {
        cout << "send flowers to " << name << endl;
    }
    void giveChocolate() {
        cout << "send chocolates to " << name << endl;
    }    

private:
    string name;
};

class Proxy : public IGiveGift {
public:
    Proxy() {}
    Proxy(string name) {
        ycao = new Pursuit(name);
    }
    ~Proxy() {
        delete ycao;
    }
    
    void giveDolls() {
        ycao->giveDolls();
    }
    void giveFlowers() {
        ycao->giveFlowers();
    }
    void giveChocolate() {
        ycao->giveChocolate();
    }      

private:
    Pursuit* ycao;
};

#endif
