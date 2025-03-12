#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <functional>
using namespace std;

int main(void) {
    vector<int> v = {5, 3, 9, 8};

    auto ans = find(v.begin(), v.end(), 8);
    if (ans != v.end()) {
        cout << "find 8 in v" << endl;
    }

    ans = find_if(v.begin(), v.end(), [](const int& p){return p%2 == 0;});
    if (ans != v.end()) {
        cout << "find even num in v" << endl;
    }

    return 0;
}


