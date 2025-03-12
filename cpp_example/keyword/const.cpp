#include <iostream>

using namespace std;

void cmpNum(const int &ra) {
    //ra = 99;
    
    if (ra > 100) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

class A {
public:
    int a;
    
    void func(void) const;
};


void A::func(void) const {
    //this->a = 9l;
    cout << "this->a = " << this->a << endl;
}

int main(void) {
    int a = 23;
    cmpNum(a);
    
    A ac;
    ac.a = 99;
    ac.func();
    
    
    return 0;
}
