#include <iostream>

using namespace std;

class A {
public:
    int age;
    mutable int callTimes;
    
    void getAge(void) const;
    void getCallTimes(void);    
};

void A::getAge(void) const {
    cout << "age = " << this->age << endl;
    this->callTimes += 1;
}

void A::getCallTimes(void) {
    cout << "call times = " << this->callTimes << endl;;
}


int main(void) {
    A a;
    a.age = 20;
    a.callTimes = 0;
    
    for (int i = 0; i < 10; i ++) {
        a.getAge();
    }
    
    a.getCallTimes();
    
    return 0;
}
