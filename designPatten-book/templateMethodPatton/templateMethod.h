#ifndef _TEMPLATEMETHOD_H_
#define _TEMPLATEMETHOD_H_

using namespace std;

class TestPaper {
public:
    TestPaper() {}
    virtual ~TestPaper() {}

    void question() {
        cout << "问题1，杨过得到，后来给力郭靖，炼成倚天剑和屠龙刀的玄铁可能是：a 球磨铸铁，b 马口铁，c 高速合金钢，d 碳素纤维" << endl;
        cout << "问题2，杨过，程英，路无上铲除了清花，造成：a 使这种植物不再害人，b 使一种珍稀物种灭绝，c 破坏了那个生物圈的生态平衡，d 造成该地区沙漠化" << endl;        
    }

    virtual void answer() = 0;
};

class YcaoAnswer : public TestPaper {
public:
    void answer() {
        cout << "ycao question1 answer is c" << endl;
        cout << "ycao question2 answer is b" << endl;
    }
};

class MiaoAnswer : public TestPaper {
public:
    void answer() {
        cout << "miao question1 answer is a" << endl;
        cout << "miao question2 answer is a" << endl;
    }
};


#endif
