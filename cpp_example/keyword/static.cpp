#include <iostream>

using namespace std;

class A {
public:
    int i;
    
    void func1(void);
    void func2(int i);
    
    static int j;
    static void func3(int j);
};

int A::j = 99;

void A::func1(void) {
    cout << "A::func1, i = " << this->i << endl;
}

void A::func2(int i) {
    cout << "A::func2, i = " << i << endl;
}

void A::func3(int j) {
    cout << "A::func3, j = " << j << endl;
}



int main(void) {
    /*
    A a;
    a.i = 23;
    a.func1();
    
    a.func2(a.i);
    */
    
    
    A::func3(A::j);
    
    
    return 0;
}
