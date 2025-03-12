#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include <string>
#include <iostream>

using namespace std;

class Phone {
public:
    Phone() {}
    virtual ~Phone() {}
    virtual void showDecorate() {}
};

class Iphone : public Phone {
public:
    Iphone() {}
    Iphone(string n):name(n) {}
    ~Iphone() {}

    void showDecorate() {
        cout << name << "的装饰";
    }

private:
    string name;
};

class Nokia : public Phone {
public:
    Nokia() {}
    Nokia(string n):name(n) {}
    ~Nokia() {}

    void showDecorate() {
        cout << name << "的装饰";
    }

private:
    string name;
};

class Decorator : public Phone {
public:
    Decorator() {}
    Decorator(Phone* rp):p(rp) {}
    virtual ~Decorator() {}

    virtual void showDecorate() {
        p->showDecorate();
    }

private:
    Phone* p;
};

class DecoratorA : public Decorator {
public:
    DecoratorA() {}
    DecoratorA(Phone* rp):Decorator(rp) {}
    void showDecorate() {
        Decorator::showDecorate();
        addDecorator();
    }

private:
    void addDecorator() {
        cout << "增加挂件" << endl;
    }
};


class DecoratorB : public Decorator {
public:
    DecoratorB() {}
    DecoratorB(Phone* rp):Decorator(rp) {}
    void showDecorate() {
        Decorator::showDecorate();
        addDecorator();
    }

private:
    void addDecorator() {
        cout << "增加贴膜" << endl;
    }
};


#endif
