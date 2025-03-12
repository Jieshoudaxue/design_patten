#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <list>
#include <string>
using namespace std;

class Observer;

class Blog {
public:
    Blog() {}
    virtual ~Blog() {}

    void attach(Observer *po);
    void remove(Observer* pr);
    void notify();

    virtual void setStatus(string s) = 0;
    virtual string getStatus() = 0;
private:
    list<Observer*> lo;    
};

class Csdn : public Blog {
public:
    Csdn() {}
    ~Csdn() {}

    Csdn(string n):name(n) {}

    void setStatus(string s) {
        status = "csdn msg: " + name + s;
    }
    string getStatus() {
        return status;
    }

    
private:
    string name;
    string status;
};

class Observer {
public:
    Observer() {}
    ~Observer() {}

    Observer(string n, Blog* pb):name(n), blog(pb) {}

    void update() {
        string s = blog->getStatus();
        cout << name << "------" << s << endl;
    }

private:
    string name;
    Blog* blog;
};



#endif
