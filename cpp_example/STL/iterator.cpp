#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
using namespace std;

int main(void) {
    array<int, 3> a = {1, 2, 3};
    cout << a[1] << endl;

    for (auto p = a.begin(); p != a.end(); p++) {
        cout << *p << endl;
    }

    for (auto p = a.end(); p != a.begin(); p--) {
        cout << *p << endl;
    }

    for (auto p = a.cbegin(); p != a.cend(); p++) {
        cout << *p << endl;
        //*p = 9;
    }

    for (auto p = a.rbegin(); p != a.rend(); p++) {
        cout << *p << endl;
    }    

    vector<int> b;
    b.assign(5, 9);
    cout << b[0] << endl;

    for (int i : b) {
        cout << i << endl;
    }
    for (auto i : b) {
        cout << i << endl;
    }    

    return 0;
}
