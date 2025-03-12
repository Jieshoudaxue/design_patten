#include <iostream>
#include <memory>
using namespace std;

class TestB;
class TestA {
public:
    void setPb(shared_ptr<TestB>& rp) {
        pb = rp;
    }
private:
    //循环引用，导致无法释放，应将其中一个改为weak_ptr
    //具体见https://blog.csdn.net/albertsh/article/details/82286999

    //shared_ptr<TestB> pb;     
    weak_ptr<TestB> pb;
};

class TestB {
public:
    void setPa(shared_ptr<TestA>& rp) {
        pa = rp;
    }
private:
    shared_ptr<TestA> pa;
};

int main(void) {
    shared_ptr<TestA> pa = make_shared<TestA>();
    shared_ptr<TestB> pb = make_shared<TestB>();

    cout << pa.use_count() << endl;
    cout << pb.use_count() << endl;

    pa->setPb(pb);
    pb->setPa(pa);

    cout << pa.use_count() << endl;
    cout << pb.use_count() << endl;


    /*********test weak_ptr func****************/
    shared_ptr<string> ps = make_shared<string>("ycao");
    weak_ptr<string> pw = ps;
    cout << *ps << endl;
    //cout << *pw << endl;    //invalid, weak_ptr do not have * and ->

    shared_ptr<string> ps1;
    if (!pw.expired()) {
        cout << *(pw.lock()) << endl;
        ps1 = pw.lock();
    }
    cout << *ps1 << endl;
    cout << ps.use_count() << endl;
    cout << ps1.use_count() << endl;

    cout << boolalpha <<  pw.expired() << endl;
    pw.reset();
    cout << boolalpha <<  pw.expired() << endl;

    weak_ptr<string> pw1;
    {
        shared_ptr<string> ps1 = ps;
        pw1 = ps1;
    }
    cout << boolalpha <<  pw1.expired() << endl;
    if (!pw1.expired()) {
        cout << *(pw1.lock()) << endl;
    }    

    ps.reset();
    ps1.reset();
    cout << ps.use_count() << endl;
    cout << ps1.use_count() << endl;

    //g++ -std=c++11 main.cpp -fno-elide-constructors -o test
    //valgrind --tool=memcheck --leak-check=full --show-reachable=yes --trace-children=yes ./test

    return 0;
}


