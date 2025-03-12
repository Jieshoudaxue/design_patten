#ifndef _BUILDER_H_
#define _BUILDER_H_

#include <string>
using namespace std;

class Person {
public:
    void updateBody(string b) {
        body = body + b;
    }
    void toString() {
        cout << body << endl;
    }

private:
    string body;
};

class Builder {
public:
    Builder() {}
    virtual ~Builder() {}
    
    virtual void buildHead() = 0;
    virtual void buildBody() = 0;
    virtual void buildArm() = 0;
    virtual void buildLeg() = 0;
    virtual Person& getPerson() = 0;
};

class PersonBuilder : public Builder {
public:
    PersonBuilder() {}
    PersonBuilder(string n) {
        p.updateBody(n);
    }
    ~PersonBuilder() {}
    
    void buildHead() {
        p.updateBody("add Head, ");
    }
    void buildBody() {
        p.updateBody("add body, ");
    }
    void buildArm() {
        p.updateBody("add arm, ");
    }
    void buildLeg() {
        p.updateBody("add leg.");
    }

    Person& getPerson() {
        return p;
    }

private:
    Person p;
};

// 建造者模式的核心就是这个指挥类，他封装了 Person 的 建造细节
class Director {
public:
    Person& construct(Builder* pb) {
        pb->buildHead();
        pb->buildBody();
        pb->buildArm();
        pb->buildLeg();
        return pb->getPerson();
    }
};

#endif
