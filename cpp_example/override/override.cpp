#include <iostream>

using namespace std;

class Father {
public:
    //virtual void func() final;
    virtual void func();
    //void func1() final;   //error, final must be with virtual
};

class Child : public Father {
public:
    void func() override;
};

int main(void) {
    
    
    
    return 0;
}
