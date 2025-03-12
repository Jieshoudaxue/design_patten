#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

#include <iostream>
using namespace std;

// 工作经验
class WorkExperience {
public:
    WorkExperience() {}
    WorkExperience(string wd, string cn):workDate(wd), company(cn) {}
    WorkExperience(const WorkExperience& rwe):workDate(rwe.workDate), company(rwe.company) {}
    ~WorkExperience() {}

    void setPara(string wd, string cn) {
        workDate = wd;
        company = cn;
    }

    void toString() {
        cout << workDate << " in " << company << endl;
    }

private:
    // 工作数据：样例里写的是工作的持续时间
    string workDate;
    // 公司名
    string company;
};

// 简历，里面有工作经验指针，主要是演示深拷贝
class Resume {
public:
    Resume() {
        pwe = NULL;
    }
    Resume(string n, string s, int a, string wd, string cn) {
        name = n;
        sex = s;
        age = a;
        pwe = new WorkExperience(wd, cn);

    }
    // 原型模式的核心就是这里：实现拷贝构造函数，注意处理深拷贝
    Resume(const Resume& r) {
        name = r.name;
        sex = r.sex;
        age = r.age;

        pwe = new WorkExperience(*(r.pwe));
    }
    ~Resume() {
        if (pwe != NULL) {
            delete pwe;
        }
    }

    void setWork(string wd, string cn) {
        this->pwe->setPara(wd, cn);
    }
    
    void toString() {
        cout << name << " " << sex << " " << age << endl;
        pwe->toString();
    }

private:
    WorkExperience* pwe;
    string name;
    string sex;
    int age;
};


#endif
