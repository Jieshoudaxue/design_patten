#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

int main(void) {
    typedef unordered_map<int, string> mymap;
    mymap a;
    a[19] = "dog";
    a[18] = "cat";
    a[17] = "bird";

    for(auto item : a) {
        cout << item.first << " " << item.second << endl;
    }

    a.insert({10, "apple"});
    a.insert({17, "origin"});      //invalid

    auto p = a.find(19);
    if (p != a.end()) {
        cout << (*p).first << " " << (*p).second << endl;
    }

    for(auto item : a) {
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}
