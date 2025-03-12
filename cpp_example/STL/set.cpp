#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <set>
using namespace std;

int main(void) {
    auto iterator = [](set<string> a) {        
        int i = 0;
        cout << "size is = " << a.size() << endl;
        for (auto p : a) {
            cout << i++ << " parameter = " << p << endl;
        }
    };

    set<string> a;
    a.insert("cat");
    a.insert("dog");
    a.insert("bird");
    iterator(a);

    cout << a.max_size() << endl;
    
    a.emplace("apple");
    iterator(a);

    set<string> b = a;
    iterator(b);

    a.erase("dog");
    iterator(a);

    a.swap(b);
    iterator(a);
    iterator(b);

    cout << a.count("apple") << endl;
    auto p = a.find("apple");
    cout << "find :" << *p << endl;

    set<string, greater<string>> c;
    c.insert("bird");
    c.insert("dog");
    c.insert("apple");
    for (auto i : c) {
        cout << i << endl;
    }


    return 0;
}
