#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <functional>
using namespace std;

int main(void) {
    vector<int> v = {2, 6, 8, 4};
    bool allIsEven = all_of(v.begin(), v.end(), [](int p){return p%2 == 0;});
    cout << boolalpha << allIsEven << endl;

    struct IsOdd {
        bool operator()(int n) {
            return n%2 == 1;
        }
    };
    bool hasOneOdd = any_of(v.begin(), v.end(), IsOdd());
    cout << boolalpha << hasOneOdd << endl;


    bool allNotOdd = none_of(v.begin(), v.end(), bind(modulus<int>(), placeholders::_1, 2));
    cout << boolalpha << allNotOdd << endl;

    return 0;
}


