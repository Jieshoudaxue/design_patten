#ifndef _VISITOR_H_
#define _VISITOR_H_

#include <string>
#include <vector>
using namespace std;

class Visitor;

class Staff {
public:
    Staff() {}
    Staff(string rn, int rkpi):name(rn), kpi(rkpi) {}
    virtual ~Staff() {}
    virtual void accept(Visitor* pv) = 0;
protected:
    string name;
    int kpi;
};


class Engineer : public Staff {
public:
    Engineer() {}
    Engineer(string rn, int rkpi):Staff(rn, rkpi) {}

    //accept函数体为：pv->visit(this);
    //（2）这里并不是直接返回结果，而是调用Visitor的visit函数，并将自己穿进去，此为第二次分派；
    //如果不这么做，就需要使用if-else判断访问者类型，从而决定返回的信息，这样的代码不符合开闭原则；
    void accept(Visitor *pv);
    int getCodeLine() {
        return rand();
    }
    string getName() {
        return name;
    }
    int getKpi() {
        return kpi;
    }
};

class Manager : public Staff {
public:
    Manager() {}
    Manager(string rn, int rkpi):Staff(rn, rkpi) {}

    void accept(Visitor *pv);
    int getProducts() {
        return rand();
    }    
    string getName() {
        return name;
    }
    int getKpi() {
        return kpi;
    }    
};

class Visitor {
public:
    //（4）注意，虽然Engineer和Manager都是Staff的子类，但是这里不能使用多态，不然无法直接通过接口区分不同的访问者，
    //可能再次落入if~else的老路；
    virtual void visit(Engineer* pe) = 0;
    virtual void visit(Manager* pm) = 0;
};


class CEOVisitor : public Visitor {
public:
    //（3）在第二次分派后，程序执行到这里，才获得了真正的信息；
    //由于访问者模式要求数据结构不变，因此这里的访问接口也就相对恒定不变；
    //访问者模式要求数据结构恒定，但对访问方式开放，通过继承能很快的增加新的访问者；
    //这种模式真正实现了数据和操作解耦！代价是结构复杂，且应用场景很少，因为很少有数据结构恒定不变的情况；
    //GoF的作者说：大多时候你不需要访问者模式，但当你真的需要时，就是真的需要它了！
    void visit(Engineer* pe) {
        cout << "Engineer: " << pe->getName() << ", KPI: " << pe->getKpi() << endl;
    }
    void visit(Manager* pm) {
        cout << "Manager: " << pm->getName() << ", KPI: " << pm->getKpi() << endl;
    }
};

class CTOVisitor : public Visitor {
public:
    void visit(Engineer* pe) {
        cout << "Engineer: " << pe->getName() << ", code line: " << pe->getCodeLine() << endl;
    }
    void visit(Manager* pm) {
        cout << "Manager: " << pm->getName() << ", products: " << pm->getKpi() << endl;
    }    
};

class BusinessReport {
public:
    BusinessReport() {
        sv.push_back(new Manager("miao", 9));
        sv.push_back(new Engineer("ycao", 8));
    }
    ~BusinessReport() {
        vector<Staff*>::iterator item;
        for (item = sv.begin(); item != sv.end(); item++) {
            delete *item;
        }        
    }

    void show(Visitor* pv) {
        vector<Staff*>::iterator item;
        for (item = sv.begin(); item != sv.end(); item++) {
            //（1）访问者模式的一个核心是双分派技术，这里调用Staff的accept，将Visitor传进去，完成第一次分派；
            (*item)->accept(pv);
        }
    }
private:
    vector<Staff*> sv;
};
#endif
