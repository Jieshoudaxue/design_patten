#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <functional>
using namespace std;

int main(void) {
    vector<int> v{2, 4, 6, 1, 9};

    auto print = [](const int& p) {
        cout << p << " ";
    };

    for_each(v.begin(), v.end(), print);
    cout << endl;

    for_each(v.begin(), v.end(), [](int& p){p++;});
    for_each(v.begin(), v.end(), print);
    cout << endl;

    struct Sum {
        int sum = 0;
        void operator()(int p) {sum += p;}
    };
    Sum s = for_each(v.begin(), v.end(), Sum());
    cout << s.sum << endl;

    return 0;
}


