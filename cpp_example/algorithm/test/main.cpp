#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

int main(void) {
    auto iteratorA = [](array<int, 5> a) {
        for (auto item : a) {
            cout << item << " ";
        }
        cout << endl;
    };
    array<int, 5> a = {-2, 1, -5, 4, 2};
    iteratorA(a);
    sort(a.begin(), a.end());
    iteratorA(a);

    auto iteratorV = [](vector<int> a) {
        for (auto item : a) {
            cout << item << " ";
        }
        cout << endl;
    };
    vector<int> v = {-2, 1, -5, 4, 2};
    iteratorV(v);
    sort(v.begin(), v.end());
    iteratorV(v);

    auto iteratorL = [](list<int> a) {
        for (auto item : a) {
            cout << item << " ";
        }
        cout << endl;
    };
    list<int> l = {-2, 1, -5, 4, 2};
    iteratorL(l);
    //sort(l.begin(), l.end());     //invalid
    l.sort();
    iteratorL(l);

    auto iteratorD = [](deque<int> a) {
        for (auto item : a) {
            cout << item << " ";
        }
        cout << endl;
    };
    deque<int> d = {-2, 1, -5, 4, 2};
    iteratorD(d);
    sort(d.begin(), d.end());
    iteratorD(d);
    sort(d.begin(), d.end(), greater<int>());
    iteratorD(d);
    return 0;
}


