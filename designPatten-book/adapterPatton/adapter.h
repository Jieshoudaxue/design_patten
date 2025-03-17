#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include <iostream>
using namespace std;

// 运动员，篮球员
class Player {
public:
    Player() {}
    Player(string rn):name(rn) {}
    virtual ~Player() {}

    // 进攻
    virtual void attack() = 0;
    // 防守
    virtual void defense() = 0;

protected:
    string name;
};

// 前锋
class Forward : public Player {
public:
    Forward() {}
    Forward(string rn):Player(rn) {}
    ~Forward() {}
    void attack() {
        cout << "forward " << name << ", attack" << endl;
    }
    void defense() {
        cout << "forward " << name << ", defense" << endl;
    }
};

// 中锋
class Center {
public:
    Center() {}
    Center(string rn):name(rn) {}
    ~Center() {}
    // 中文进攻
    void jingong() {
        cout << "forward " << name << ", jingong" << endl;
    }
    // 中文防守
    void fangshou() {
        cout << "forward " << name << ", fangshou" << endl;
    }
private:
    string name;
};

// Center 不继承 Player，有自己的接口
// 通过添加一个 Translator 类，并继承 Player，可以把 Center 的接口翻译成 Player 的接口
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

// 后卫
class Guards : public Player {
public:
    Guards() {}
    Guards(string rn):Player(rn) {}
    ~Guards() {}    
    void attack() {
        cout << "guard " << name << ", attack" << endl;
    }
    void defense() {
        cout << "guard " << name << ", defense" << endl;
    }
};


#endif
