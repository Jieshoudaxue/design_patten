#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T1, typename T2>
T1 mul(T1 a, T2 b) {
    cout << "in template" << endl;
    return a*b;
}

template <>
double mul(double a, int b) {
    cout << "in complate special" << endl;
    return a*b;
}

#if 0   //func partial specialization is not allowed
template <typename T>
double mul<T, int>(T a, int b) {
    cout << "in special" << endl;
    return a*b;
}
#endif


template <typename T1, typename T2>
T1 mul(T1* a, T2* b) {
    cout << "in T1* T2*" << endl;
    return *a**b;
}

template <typename T>
T mul(T a, int b) {
    cout << "in T int" << endl;
    return a*b;
}



int main(void) {
    double a = 3.9;
    int b = 2;
    cout << mul(a, a) << endl;
    cout << mul(a, b) << endl;
    cout << mul(&a, &b) << endl;
    cout << mul<double, int>(a, b) << endl;
    
    return 0;
}
