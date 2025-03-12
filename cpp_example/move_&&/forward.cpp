#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <functional>
#include <algorithm>
#include <memory>
using namespace std;

template <typename T>
void otherF(T& t) {
    cout << "lvalue " << t << endl;
}

template <typename T>
void otherF(const T& t) {
    cout << "rvalue " << t << endl;
}

template <typename T>
void func(T&& t) {
    otherF(std::forward<T>(t));
}

int main() {
    func(3);
    
    int a = 4;
    func(a);

    int& ra = a;
    func(ra);

    int&& rb = 8;
    func(rb);
}