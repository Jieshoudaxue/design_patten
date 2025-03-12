#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(void) {
    auto iterator = [](multiset<string> a) {
        int i = 0;
        for (auto item : a) {
            cout << i++ << " " << item << endl;
        }
    };
    multiset<string> a;
    a.insert("bird");
    a.insert("apple");
    a.insert("cat");
    iterator(a);

    a.insert("dog");
    iterator(a);

    a.insert("apple");
    iterator(a);

    a.emplace("dog");
    iterator(a);

    auto p = a.find("dog");
    cout << *p << endl;

    a.erase("dog");
    iterator(a);


    return 0;
}
