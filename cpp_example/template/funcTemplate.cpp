#include <iostream>

using namespace std;

#if 0
template <typename T>
void mySwap(T& a, T& b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}
#endif

#if 1
template <typename T1, typename T2>
void mySwap(T1& a, T2& b) {
    T1 tmp;
    tmp = a;
    a = b;
    b = tmp;
}
#endif

int main(void) {
    //int a = 4, b = 9;
    //double a = 4.3, b = 9.9;
    int a = 4;
    double b = 9.9;
    mySwap(a, b);
    mySwap<int, double>(a, b);
    
    cout << "a = " << a << ", b = " << b << endl;
    
    
    
    return 0;
}
