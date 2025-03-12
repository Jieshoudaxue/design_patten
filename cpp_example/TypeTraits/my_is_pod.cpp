#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
#include <cstring>
#include <type_traits>
#include <typeinfo>
using namespace std;

/*  第一种实现
template <typename T>
struct my_is_pod {
    static bool value;
};

template <typename T>
bool my_is_pod<T>::value = false;

template <>
struct my_is_pod<int> {
    static bool value;
};

bool my_is_pod<int>::value = true;
*/

//第二种实现
struct TrueType {
    bool value = true;
};

struct FalseType {
    bool value = false;
};

template <typename T>
struct my_is_pod {
    typedef FalseType myType;
};

template <>
struct my_is_pod<int> {
    typedef TrueType myType;
};

template <typename T>
void myCopy(T* dst, T* src, int len) {
    //if (is_pod<T>::value) {       //系统函数
    //if (my_is_pod<T>::value) {    //调用第一种实现
    if (typename my_is_pod<T>::myType().value) {    //调用第二种实现
        cout << "true" << endl;
        memcpy(dst, src, sizeof(T)*len);
    } else {
        cout << "false" << endl;
        for (int i = 0; i < len; i++) {
            dst[i] = src[i];
        }
    }
}

int main(void) {
    int a[3] = {0};
    int b[3] = {3, 5, 2};
    myCopy<int>(a, b, sizeof(a)/sizeof(a[0]));
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        cout << "a[" << i << "] = " << a[i] << ", b[" << i << "] = " << b[i] << endl;
    }

    string c[3];
    string d[3] = {"ycao", "miao", "jwen"};
    myCopy<string>(c, d, sizeof(c)/sizeof(c[0]));
    for (int i = 0; i < sizeof(c)/sizeof(c[0]); i++) {
        cout << "c[" << i << "] = " << c[i] << ", d[" << i << "] = " << d[i] << endl;
    }

    return 0;
}
