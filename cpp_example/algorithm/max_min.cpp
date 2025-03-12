#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <functional>
#include <utility>
using namespace std;

int main(void) {
    int a = 9, b = 7;

    cout << max(a, b) << endl;
    cout << min(a, b) << endl; 

    vector<int> v = {6, 3, 9, 2, 10};
    auto item = max_element(v.begin(), v.end());
    cout << *item << endl;

    item = min_element(v.begin(), v.end());
    cout << *item << endl;
    return 0;
}


