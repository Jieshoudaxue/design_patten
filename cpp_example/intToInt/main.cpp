#include <iostream>

using namespace std;

class Int {
public:
    Int() {}
    Int(int pa) {
        this->a = pa;
    }

    int toInt() {
        return this->a;
    }
    
private:
    int a;
};


int main(void) {
    Int a = 7;
    
    int b = a.toInt();
    cout << "b = " << b << endl;
    
    Int array[10];
    array[1] = 8;
    
    Int* pi = new Int[10];
    pi[1] = 9;
    
    
    return 0;
}
