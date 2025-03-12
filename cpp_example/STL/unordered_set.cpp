#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main(void) {
    typedef unordered_set<int> myset;
    myset a;
    a.insert(12);
    a.insert(9);
    a.insert(18);

    for(auto item : a) {
        cout << item << endl;
    }

    a.insert(12);   //invalid

    for(auto item : a) {
        cout << item << endl;
    }    

    auto p = a.find(9);
    cout << *p << endl;

    return 0;
}
