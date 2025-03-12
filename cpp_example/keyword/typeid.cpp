#include <iostream>
#include <typeinfo>

using namespace std;

struct Stru {
    int a;
    char b;
    double c;
};

enum Day {
    MON,
    SUN,
};

union Uni {
    int a;
    char b;
}u1;

int main(void) {
    Stru s1;
    
    cout << "typeid s1 = " << typeid(s1).name() << endl;
    
    Day d1;
    cout << "typeid d1 = " << typeid(d1).name() << endl;
    
    cout << "typeid u1 = " << typeid(u1).name() << endl;
    
    signed int a;
    int b;
    if (typeid(a) == typeid(b)) {
        cout << "signed int equal unsigned int" << endl;
    }
    
    return 0;
}
