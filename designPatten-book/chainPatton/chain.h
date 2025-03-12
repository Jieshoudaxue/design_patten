#ifndef _CHAIN_H_
#define _CHAIN_H_

#include <string>
using namespace std;

class Manager {
public:
    Manager() {
        pmng = NULL;
    }
    Manager(string rn):name(rn) {}
    virtual ~Manager() {}

    void setSuperior(Manager* rm) {
        pmng = rm;
    }

    virtual void request(int day) {}
protected:
    string name;
    Manager* pmng;
};

class CommonManager : public Manager {
public:
    CommonManager() {}
    CommonManager(string rn):Manager(rn) {}

    void request(int day) {
        if (day <= 2) {
            cout << "CommonManager " << name << " agrees your " << day << " days vacation" << endl;
        } else {
            if (pmng != NULL) {
                pmng->request(day);
            }
        }
    }

};

class Majordomo : public Manager {
public:
    Majordomo() {}
    Majordomo(string rn):Manager(rn) {}

    void request(int day) {
        if (day <= 5) {
            cout << "Majordomo " << name << " agrees your " << day << " days vacation" << endl;
        } else {
            if (pmng != NULL) {
                pmng->request(day);
            }
        }
    }

};

class GeneralManager : public Manager {
public:
    GeneralManager() {}
    GeneralManager(string rn):Manager(rn) {}

    void request(int day) {
        cout << "GeneralManager " << name << " agrees your " << day << " days vacation" << endl;
    }
};


#endif
