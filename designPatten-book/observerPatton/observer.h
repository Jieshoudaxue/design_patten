#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <iostream>
#include <list>
using namespace std;

class Subject;

class Observer {
public:
    Observer() {}
    Observer(string rn, Subject* rp):name(rn), ps(rp) {}
    virtual ~Observer() {}
    virtual void update() = 0;

public:
    string name;
    Subject* ps;
};

class Subject {
public:
    Subject() {}
    virtual ~Subject() {}
    virtual void attach(Observer* po) = 0;
    virtual void detach(Observer* po) = 0;
    virtual void notify() = 0;
    virtual void setAction(string ss) = 0;
    virtual string& getAction() = 0;
};

class Boss : public Subject {
public:
    void attach(Observer * po) {
        olist.push_back(po);
    }
    void detach(Observer * po) {
        olist.remove(po);
    }
    void notify() {
        for (list<Observer*>::iterator item=olist.begin(); item!=olist.end(); ++item) {
            (*item)->update();
        }
    }
    void setAction(string ss) {
        action = ss;
    }
    string& getAction() {
        return action;
    }

private:
    list<Observer*> olist;
    string action;
};

class StockObserver : public Observer {
public:
    StockObserver() {
        ps = NULL;
    }
    StockObserver(string rn, Subject* rp):Observer(rn, rp) {}
    ~StockObserver() {}

    void update() {
        cout << ps->getAction() << ", " << name << " closed stock" << endl;
    }
};

class NbaObserver : public Observer {
public:
    NbaObserver() {
        ps = NULL;
    }
    NbaObserver(string rn, Subject* rp):Observer(rn, rp) {}
    ~NbaObserver() {}

    void update() {
        cout << ps->getAction() << ", " << name << " closed NBA" << endl;
    }
};



#endif
