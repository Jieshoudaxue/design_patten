#include <iostream>

using namespace std;

union uni {
    int a;
    char b;
};

struct str {
    int a;
    union {
        int ua;
        int ub;
    }b;
};


int main(void) {
    union uni u1;
    u1.a = 1;
    
    cout << "sizeof(uni) = " << sizeof(uni) << endl;
    
    if (u1.b) {
        cout << "little" << endl;
    }
    
    uni u2 = {2};
    cout << "uni u2 = " << (int)u2.b << endl;
    
    
    struct str s1;
    s1.a = 23;
    s1.b.ua = 234;
    
    cout << "s1.b.ub = " << s1.b.ub << endl;
    
    str s2 = {2, 34};
    cout << "s2.b.ub = " << s2.b.ub << endl;
    
    return 0;
}

