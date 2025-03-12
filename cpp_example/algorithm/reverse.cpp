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
    vector<int> v = {6, 3, 8, 0};
    auto print = [](const vector<int>& v){
        for (auto& item : v) {
            cout << item << " ";
        }
        cout << endl;
    };

    print(v);

    reverse(v.begin(), v.end());
    print(v);
    return 0;
}


