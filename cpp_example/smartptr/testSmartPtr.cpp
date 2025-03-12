#include <iostream>
#include <memory>
using namespace std;

void remodel(string& str) {
    cout << str << endl;

    //string *ps = new string(str);
    string *ps = new string();
    *ps = str;

    str = *ps;
    cout << str << endl;
    delete ps;
}

class Base {
 public:
    void print() {
        std::cout << "base::print" << std::endl;
    }
};
 
class Derived : public Base{
 public:
    void print() {
        std::cout << "derived::print" << std::endl;
    }
};

int main(void) {

#if 0
    int *pi = new int;
    cout << *pi << endl;
    *pi = 23;
    cout << *pi << endl;
    delete pi;

    int *pi1 = new int(23);
    cout << *pi1 << endl;
    delete pi1;

    int *pia = new int[10];
    for(int i = 0; i < 10; i++) {
        pia[i] = i;
        cout << pia[i] << " ";
    }
    cout << endl;
    delete pia;
#endif

    shared_ptr<int> pi(new int);
    *pi = 23;
    cout << *pi << endl;

    shared_ptr<int> pi1(new int(23));
    cout << *pi1 << endl;

    unique_ptr<int[]> pia(new int[10]);
    for(int i = 0; i < 10; i ++) {
        pia[i] = i;
        cout << pia[i] << " ";
    }
    cout << endl;

    shared_ptr<int> pi2 = make_shared<int>(23);
    cout << *pi2 << endl;

    shared_ptr<string> ps = make_shared<string>("hello world");
    cout << *ps << endl;

    shared_ptr<string> ps1 = ps;
    cout << *ps << endl;
    cout << *ps1 << endl;
    cout << ps.use_count() << endl;
    cout << ps1.use_count() << endl;

    weak_ptr<string> pw(ps);
    cout << pw.use_count() << endl;
    if (!pw.expired()) {
        shared_ptr<string> ps2 = pw.lock();
        cout << pw.use_count() << endl;
        cout << ps2.use_count() << endl;
    }
    weak_ptr<string> pw1 = ps;
    cout << pw1.use_count() << endl;
    
    unique_ptr<int> pi3(new int(32));
    cout << *pi3 << endl;
    //unique_ptr<int> pi4 = pi3;
    unique_ptr<int> pi3tmp = move(pi3);
    //cout << *pi3 << endl;
    cout << *pi3tmp << endl;
    
    unique_ptr<int> pi4 = unique_ptr<int>(new int(32));
    cout << *pi4 << endl << endl;

    cout << "ycaoycao " << *(pi4.get()) << endl;

    Base *pb = new Derived();
    pb->print();
    delete pb;

    shared_ptr<Base> pb1 = make_shared<Derived>();
    pb1->print();

    shared_ptr<Derived> pd = static_pointer_cast<Derived>(pb1);
    pd->print();
    auto pd1 = static_pointer_cast<Derived>(pb1);
    pd1->print();

    shared_ptr<Base> pb2 = make_shared<Base>();
    pb2->print();

    
    return 0;
}


