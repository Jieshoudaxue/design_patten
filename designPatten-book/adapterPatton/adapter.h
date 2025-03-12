#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include <iostream>
using namespace std;

class Player {
public:
    Player() {}
    Player(string rn):name(rn) {}
    virtual ~Player() {}

    virtual void attack() = 0;
    virtual void defense() = 0;

protected:
    string name;
};

class Forward : public Player {
public:
    Forward() {}
    Forward(string rn):Player(rn) {}
    ~Forward() {}
    void attack() {
        cout << "forward " << name << ", attach" << endl;
    }
    void defense() {
        cout << "forward " << name << ", defense" << endl;
    }
};

class Center {
public:
    Center() {}
    Center(string rn):name(rn) {}
    ~Center() {}
    
    void jingong() {
        cout << "forward " << name << ", jingong" << endl;
    }
    void fangshou() {
        cout << "forward " << name << ", fangshou" << endl;
    }
private:
    string name;
};

class Translator : public Player {
public:
    Translator() {
        pc = new Center();
    }
    Translator(string rn) {
        pc = new Center(rn);
    }
    ~Translator() {
        delete pc;
    }

    void attack() {
        pc->jingong();
    }
    void defense() {
        pc->fangshou();
    }
private:
    Center* pc;
};

class Guards : public Player {
public:
    Guards() {}
    Guards(string rn):Player(rn) {}
    ~Guards() {}    
    void attack() {
        cout << "guard " << name << ", attach" << endl;
    }
    void defense() {
        cout << "guard " << name << ", defense" << endl;
    }
};


#endif
