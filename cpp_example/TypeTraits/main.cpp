#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
#include <cstring>
#include <type_traits>
#include <typeinfo>
using namespace std;

template <class T>
struct MyIterator {
    MyIterator(T* p):ptr(p) {}
    typedef T value_type;
    T& operator*() const {
        return *ptr;
    }
    T* ptr;
};

template <class T>
struct YourIterator {
    YourIterator(T* p):ptr(p) {}
    typedef T value_type;
    T& operator*() const {
        return *ptr;
    }
    T* ptr;
};

template <class U>
struct Iterator_Traits {
    typedef typename U::value_type value_type;
};

template <class I>
typename Iterator_Traits<I>::value_type func(I iter) {
    return *iter;
}

int main(void) {
    MyIterator<int> iter(new int(8));

    YourIterator<double> iter1(new double(3.3));

    cout << func<MyIterator<int>>(iter) << endl;
    cout << func<YourIterator<double>>(iter1) << endl;
    return 0;
}
