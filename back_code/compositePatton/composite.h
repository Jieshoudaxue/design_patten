#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_

#include <string>
#include <list>

using namespace std;

class Company {
public:
    Company() {}
    Company(string rn) {
        name = rn;
    }
    virtual ~Company() {}

    virtual void add(Company* rc) {}
    virtual void show(int depth) {}
    virtual void destroy() {}

protected:
    string name;

};

class RealCompany : public Company {
public:
    RealCompany() {}
    RealCompany(string rn):Company(rn) {}
    ~RealCompany() {}

    void add(Company* rc);
    void show(int depth);
    void destroy();

private:
    //总公司的list存的是总公司的财务，人事，分公司1和分公司2
    //分公司的list只存分公司的财务和人事
    //虽然财务，人事和分公司是不同的类，但是均继承自抽象的公司类，利用多态就可以做到无差别对待
    //调用root的show函数，其内遍历list并递归调用自己，从而将树根到叶子的show函数一层一层地调用起来
    list<Company*> cl;
};

class Finance : public Company {
public:
    Finance() {}
    Finance(string rn):Company(rn) {}
    ~Finance() {}

    void show(int depth);
    void destroy();

};

class Hr : public Company {
public:
    Hr() {}
    Hr(string rn):Company(rn) {}
    ~Hr() {}

    void show(int depth);
    void destroy();
};

class Builder {
public:
    Company* create();
private:
    Company* c;
};





#endif
