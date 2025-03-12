#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_

#include <string>
using namespace std;

class Mediator;

class Person {
public:
    Person() {
        m = NULL;
    }
    virtual ~Person() {}

    virtual void setMediator(Mediator* pm) {}
    virtual void sendMessage(string msg) {}
    virtual void getMessage(string msg) {}
    
protected:
    Mediator* m;    
};

class Mediator {
public:
    virtual void send(string msg, Person *p) {}
    virtual void setR(Person* pr) {}
    virtual void setL(Person* pl) {}
};

class Renter : public Person {
public:
    void setMediator(Mediator * pm) {
        m = pm;
    }
    void sendMessage(string msg) {
        m->send(msg, this);
    }
    void getMessage(string msg) {
        cout << "renter receives: " << msg << endl;
    }
};

class Landlord : public Person {
public:
    void setMediator(Mediator * pm) {
        m = pm;
    }
    void sendMessage(string msg) {
        m->send(msg, this);
    }
    void getMessage(string msg) {
        cout << "landlord receives: " << msg << endl;
    }

};

class LianJia : public Mediator {
public:
    LianJia() {
        rntr = NULL;
        lndlrd = NULL;
    }
    ~LianJia() {}

    void setR(Person *pr) {
        rntr = pr;
    }
    void setL(Person * pl) {
        lndlrd = pl;
    }

    void send(string msg, Person * p) {
        if (p == rntr) {
            lndlrd->getMessage(msg);
        } else if (p == lndlrd ) {
            rntr->getMessage(msg);
        }
    }


private:
    Person *rntr;
    Person *lndlrd;
};

#endif
