#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

#include <iostream>
#include <cstring>

using namespace std;

class Resume {
public:
    Resume() {
        name = NULL;
    }
    virtual ~Resume() {
        cout << "~Resume" << endl;
    }

    virtual Resume* clone() {
        return NULL;
    }
    virtual void destoryClone() {}

    virtual void show() {}

protected:
    char* name;
};

class ResumeA : public Resume {
public:
    ResumeA() :   Resume() {}
    
    ResumeA(const char* str) {
        if (str != NULL) {
            name = new char[strlen(str)+1];
            strcpy(name, str);
        }
    }
    
    ResumeA(const ResumeA& ra) {
        name = new char[strlen(ra.name)+1];
        strcpy(name, ra.name);
    }

    ~ResumeA() {
        //name虽然是从父类继承来的成员，但是却在子类分配了内存，因此需要在子类的析构函数中释放内存；    
        if (name != NULL) {
            delete [] name;
        }
        cout << "~ResumeA" << endl;
    }

    //克隆函数是原型模板的关键，其通过调用拷贝构造函数将本身对象复制一份并返回
    Resume* clone();
    //当类的外部调用clone函数后，其会new一个新的对象，根据哪里分配哪里释放原则，在类内添加释放函数，
    //由复制出的对象调用，将自己释放
    void destoryClone();
    void show();
};

class ResumeB : public Resume {
public:
    ResumeB() :   Resume() {}
    
    ResumeB(const char* str) {
        if (str != NULL) {
            name = new char[strlen(str)+1];
            strcpy(name, str);
        }
    }
    
    ResumeB(const ResumeB& ra) {
        name = new char[strlen(ra.name)+1];
        strcpy(name, ra.name);
    }

    ~ResumeB() {
        if (name != NULL) {
            delete [] name;     
        }
        cout << "~ResumeB" << endl;
    }

    Resume* clone();
    void destoryClone();
    void show();
};

#endif