#ifndef _BRIDGE_H_
#define _BRIDGE_H_

#include <string>
using namespace std;

class PhoneSoft {
public:
    virtual ~PhoneSoft() {}
    virtual void run() {}
};

class Game : public PhoneSoft {
public:
    void run() {
        cout << "phone game" << endl;
    }
};

class AddressList : public PhoneSoft {
public:
    void run() {
        cout << "phone address list" << endl;
    }
};

class PhoneBrand {
public:
    PhoneBrand() {}
    PhoneBrand(PhoneSoft* rp):p(rp) {}
    virtual ~PhoneBrand() {}
    virtual void run() {};

protected:
    PhoneSoft* p;
};

class Nokia : public PhoneBrand {
public:
    Nokia() {}
    Nokia(PhoneSoft* rp):PhoneBrand(rp) {}
    
    void run() {
        p->run();
    }
};

class Iphone : public PhoneBrand {
public:
    Iphone() {}
    Iphone(PhoneSoft* rp):PhoneBrand(rp) {}    
    void run() {
        p->run();
    }
};


#endif
