#include <iostream>
#include "composite.h"

using namespace std;

void RealCompany::add(Company* rc) {
    cl.push_back(rc);
}
void RealCompany::show(int depth) {
    for (int i = 0; i < depth; i ++) {
        cout << "-";
    }
    cout << name << endl;
    for (list<Company*>::iterator item = cl.begin(); item != cl.end(); item ++) {
        (*item)->show(depth+2);
    }
}
void RealCompany::destroy() {
    for (list<Company*>::iterator item = cl.begin(); item != cl.end(); item ++) {
        (*item)->destroy();
    }
    delete this;
    cout << "delete " << this->name << endl;    
}

void Finance::show(int depth) {
    for (int i = 0; i < depth; i ++) {
        cout << "-";
    }
    cout << name << endl;
}
void Finance::destroy() {
    delete this;
    cout << "delete " << this->name << endl;    
}

void Hr::show(int depth) {
    for (int i = 0; i < depth; i ++) {
        cout << "-";
    }
    cout << name << endl;
}
void Hr::destroy() {
    delete this;
    cout << "delete " << this->name << endl;    
}

Company* Builder::create() {
    c = new RealCompany("总公司");
    Company* leaf1 = new Finance("总部财务");
    Company* leaf2 = new Hr("总部人事");
    c->add(leaf1);
    c->add(leaf2);

    Company* left = new RealCompany("分公司一");
    Company* lleaf1 = new Finance("一财务");
    Company* lleaf2 = new Hr("一人事");
    left->add(lleaf1);
    left->add(lleaf2);
    
    Company* right = new RealCompany("分公司二");
    Company* lr1 = new Finance("二财务");
    Company* lr2 = new Hr("二人事");
    right->add(lr1);
    right->add(lr2);

    c->add(left);
    c->add(right);

    return c;

}


