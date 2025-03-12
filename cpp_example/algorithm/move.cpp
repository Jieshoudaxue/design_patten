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
    string s = "ycao";
    cout << "s = " << s << endl;
    vector<string> v;
    v.push_back(move(s));
    cout << "s = " << s << endl;
    cout << v[0] << endl;

    return 0;
}


