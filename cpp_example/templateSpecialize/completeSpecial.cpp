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
double mul<double, int>(double a, int b) {
    cout << "in special" << endl;
    return a*b;
}

template <typename T1, typename T2>
class Operator {
public:
    Operator(T1 ra, T2 rb):a(ra), b(rb) {}
    T1 mul();
private:
    T1 a;
    T2 b;
};

template <typename T1, typename T2>
T1 Operator<T1, T2>::mul() {
    cout << "in template class" << endl;
    return a*b;
}

template <>
class Operator<double, int> {
public:
    Operator(double ra, int rb):a(ra), b(rb) {}
    double mul() {
        cout << "int special class" << endl;
        return a*b;
    }
private:
    double a;
    int b;
};

int main(void) {
    double a = 3.9;
    int b = 2;
    cout << mul(a, b) << endl;

    Operator<double, double> o(3.3, 4.0);
    cout << o.mul() << endl;

    Operator<double, int> o1(3.3, 4);
    cout << o1.mul() << endl;
    return 0;
}
