#include <iostream>

using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main(void) {
    int a = 9; 
    int b = 8;
    
    cout << "a + b = " << add(a, b) << endl;
    
    
    return 0;
}
