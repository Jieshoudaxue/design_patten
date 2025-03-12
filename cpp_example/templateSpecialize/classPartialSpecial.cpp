#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T1, typename T2>
class Operator {
public:
    Operator(T1 ra, T2 rb):a(ra), b(rb) {}
    T1 mul() {
        cout << "in template class" << endl;
        return a*b;        
    }
private:
    T1 a;
    T2 b;
};

template <>
class Operator<double, int> {
public:
    Operator(double ra, int rb):a(ra), b(rb) {}
    double mul() {
        cout << "in complete special" << endl;
        return a*b;        
    }
private:
    double a;
    double b;
};

template <typename T>
class Operator<T, int> {
public:
    Operator(T ra, int rb):a(ra), b(rb) {}
    T mul() {
        cout << "int special class one" << endl;
        return a*b;
    }
private:
    T a;
    int b;
};

template <typename T1, typename T2>
class Operator<T1*, T2*> {
public:
    Operator(T1* ra, T2* rb):a(ra), b(rb) {}
    T1 mul() {
        cout << "int special class two" << endl;
        return (*a)*(*b);
    }
private:
    T1* a;
    T2* b;
};

template <typename T1, typename T2>
class Operator<T1&, T2&> {
public:
    Operator(T1& ra, T2& rb):a(ra), b(rb) {}
    T1 mul() {
        cout << "int special class three" << endl;
        return (a)*(b);
    }
private:
    T1& a;
    T2& b;
};

template <typename T1, typename T2>
class Operator<const T1&, const T2&> {
public:
    Operator(T1 ra, T2 rb):a(ra), b(rb) {}
    T1 mul() {
        cout << "int special class four" << endl;
        return (a)*(b);
    }
private:
    T1 a;
    T2 b;
};

template <typename T1, typename T2>
class Operator<vector<T1>, vector<T2>> {
public:
    Operator(vector<T1>& ra, vector<T2>& rb):a(ra), b(rb) {}
    T1 mul() {
        cout << "in template class five" << endl;
        return a[0]*b[0];        
    }
private:
    vector<T1>& a;
    vector<T2>& b;
};

int main(void) {
    double a = 2.3;
    int b = 2;
    Operator<double, int> o(a, b);
    cout << o.mul() << endl;

    Operator<double*, int*> o1(&a, &b);
    cout << o1.mul() << endl;

    Operator<double&, int&> o2(a, b);
    cout << o2.mul() << endl;

    Operator<const double&, const int&> o3(a, b);
    cout << o3.mul() << endl;

    vector<double> vd;
    vd.push_back(a);
    vector<int> vi;
    vi.push_back(b);
    Operator<vector<double>, vector<int>> o4(vd, vi);
    cout << o4.mul() << endl;


    return 0;
}
