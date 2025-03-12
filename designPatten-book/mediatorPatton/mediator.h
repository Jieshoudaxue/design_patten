#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_

#include <string>
using namespace std;

class Unsc;

class Country {
public:
    Country() {}
    Country(Unsc* ru):punsc(ru) {}
    virtual ~Country() {}
    virtual void declare(string rm) {}
    virtual void getMsg(string rm) {}
protected:
    Unsc* punsc;
};

class Unsc   {
public:
    Unsc() {
        usa = NULL;
        iraq = NULL;
    }

    void setUsa(Country* pc) {
        usa = pc;
    }
    void setIraq(Country* pc) {
        iraq = pc;
    }

    void declare(string msg, Country* pc) {
        if (pc == this->usa) {
            iraq->getMsg(msg);
        } else if (pc == this->iraq) {
            usa->getMsg(msg);
        }

    }
private:
    Country* usa;
    Country* iraq;
};


class Usa : public Country {
public:
    Usa() {}
    Usa(Unsc* ru):Country(ru) {}

    void declare(string rm) {
        punsc->declare(rm, this);
    }
    void getMsg(string rm) {
        cout << "USA get message: " << rm << endl;
    }
};

class Iraq : public Country {
public:
    Iraq() {}
    Iraq(Unsc* ru):Country(ru) {}

    void declare(string rm) {
        punsc->declare(rm, this);
    }
    void getMsg(string rm) {
        cout << "Iraq get message: " << rm << endl;
    }
};



#endif
