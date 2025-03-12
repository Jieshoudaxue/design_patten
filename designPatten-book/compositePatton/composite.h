#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_

#include <string>
#include <list>
using namespace std;

class Company {
public:
    Company() {}
    Company(string rn):name(rn) {}
    virtual ~Company() {}
    virtual void add(Company* rc) {}
    virtual void remove(Company* rc) {}
    virtual void display(int depth) {}
    virtual void duty() {};
protected:
    string name;
};

class Composite : public Company {
public:
    Composite() {}
    Composite(string rn):Company(rn) {}
    ~Composite() {}

    void add(Company* rc) {
        clist.push_back(rc);
    }
    void remove(Company* rc) {
        clist.remove(rc);
    }
    void display(int depth) {
        for (int i = 0; i < depth; i ++) {
            cout << "-";
        }
        cout << name << endl;
        for (list<Company*>::iterator item=clist.begin(); item!=clist.end(); ++item) {
            (*item)->display(depth+2);
        }        
    }
    void duty() {
        for (list<Company*>::iterator item=clist.begin(); item!=clist.end(); ++item) {
            (*item)->duty();
        } 
    }
private:
    list<Company*> clist;
};

class HR : public Company {
public:    
    HR() {}
    HR(string rn):Company(rn) {}
    ~HR() {}
    void display(int depth) {
        for (int i = 0; i < depth; i ++) {
            cout << "-";
        }
        cout << this->name << endl;
    }
    void duty() {
        cout << name << " 人员管理" << endl;
    }    
};

class Finance : public Company {
public:       
    Finance() {}
    Finance(string rn):Company(rn) {}
    ~Finance() {}
    void display(int depth) {
        for (int i = 0; i < depth; i ++) {
            cout << "-";
        }
        cout << name << endl;
    }
    void duty() {
        cout << name << " 财务收支" << endl;
    }    
};

#endif
