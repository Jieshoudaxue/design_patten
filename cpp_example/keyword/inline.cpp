#include <iostream>

using namespace std;

inline int add(int a, int b) {
    return a + b;
}

class test {
public:    
    int ta;
    int tb;
    
    int add(int a, int b) {
        return a + b;
    }
};


int main(void) {
    int a = 3;
    int b = 9;
    
    cout << "add(a, b) = " << add(a, b) << endl;
    
    test ct1;
    ct1.ta = 4;
    ct1.tb = 29;
    cout << "add ct1.a ct1.b = " << add(ct1.ta, ct1.tb) << endl;
    
    return 0;
}










