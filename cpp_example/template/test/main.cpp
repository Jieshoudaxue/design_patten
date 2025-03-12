#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
T great(T& a, T& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

template <>
string great(string& a, string& b) {
    if (a.size() > b.size()) {
        return a;
    } else {
        return b;
    }
}

string great(string& a, string& b) {
    cout << "in common great ";
    if (a.size() > b.size()) {
        return a;
    } else {
        return b;
    }
}


int main(void) {
    //int a = 3, b = 9;
    //double a = 3.4, b = 9.2;
    string a = "ycao", b = "miaomiao";
    
    cout << great(a, b) << endl;

    return 0;
}
