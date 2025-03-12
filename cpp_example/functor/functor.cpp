#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
using namespace std;

template <class T>
class great {
public:
    great() {
        cout << "in greate()" << endl;
    }
    bool operator()(T& a, T& b) {
        cout << "in operator()" << endl;
        return a > b;
    }
};

bool comp(const int a, const int b) {
    return a > b;
}

template <class T>
bool comp1(T& a, T& b) {
    return a > b;
}

int main(void) {
    auto iteratorV = [](vector<int> a) {
        for (auto item : a) {
            cout << item << " ";
        }
        cout << endl;
    };
    vector<int> v = {-2, 1, -5, 4, 2};
    iteratorV(v);
    //sort(v.begin(), v.end(), comp);
    sort(v.begin(), v.end(), great<int>());
    sort(v.begin(), v.end(), comp1<int>);
    iteratorV(v);

    auto p = great<int>();
    int a = 1, b = 3;
    cout << p(a, b) << endl;

    return 0;
}


