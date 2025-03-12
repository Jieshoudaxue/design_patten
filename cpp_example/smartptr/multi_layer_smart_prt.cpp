#include <iostream>
#include <string>
#include <memory>
#include <vector>
using namespace std;

class Ycao {
public:
    Ycao() {
        cout << "Ycao()" << endl;
    }
    ~Ycao() {
        cout << "~Ycao()" << endl;
    }
};

class Test {
public:
    Test() {
        v.push_back(std::unique_ptr<Ycao>(new Ycao()));
        v.push_back(std::unique_ptr<Ycao>(new Ycao()));
        v.push_back(std::unique_ptr<Ycao>(new Ycao()));
        cout << "Test()" << endl;
    }
    ~Test() {
        cout << "~Test()" << endl;
    }
private:
    std::vector<std::unique_ptr<Ycao>> v;
};

class TestLayer2 {
public:
    TestLayer2() {
        a.at(0) = std::unique_ptr<Test>(new Test());
        a.at(1) = std::unique_ptr<Test>(new Test());
        a.at(2) = std::unique_ptr<Test>(new Test());
        cout << "TestLayer2()" << endl;
    }
    ~TestLayer2() {
        cout << "~TestLayer2()" << endl;
    }

    void clear() {
        a.at(0).reset();
        a.at(0) = nullptr;
        cout << "TestLayer2::clear()" << endl;
    }

private:
    std::array<std::unique_ptr<Test>, 3> a;
};

int main() {
    //std::unique_ptr<Ycao> t1(new Ycao());

    TestLayer2* t2 = new TestLayer2();

    t2->clear();

    delete t2;
    return 0;
}