#include <iostream>
#include <typeinfo>

using namespace std;


int main(void) {
    auto a = 4;
    //auto a;
    cout << "typeid a = " << typeid(a).name() << endl;
    
    int b = 3;
    decltype(b) d;
    cout << "typeid d = " << typeid(d).name() << endl;
    
    int c = 44;
    int &rc = c;
    cout << "c = " << rc << endl;
    
    auto c1 = rc;
    cout << "typeid c1 = " << typeid(c1).name() << endl;
    
    decltype(rc) rc1 = c;
    cout << "typeid rc1 = " << typeid(rc1).name() << endl;
    
    return 0;
}
