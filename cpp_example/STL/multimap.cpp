#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(void) {
    auto iterator = [](multimap<string, int> a) {
        int i = 0;
        for(auto item : a) {
            cout << i++ << " " << item.first << " " << item.second << endl;
        }
    };
    multimap<string, int> a;
    a.insert({"bird", 10});
    a.insert({"apple", 13});
    a.insert({"dog", 16});
    a.insert({"cat", 19});
    iterator(a);

    a.insert({"dog", 16});
    iterator(a);

    a.insert({"dog", 17});
    iterator(a);

    a.emplace("egg", 18);
    iterator(a);

    auto p = a.find("dog");
    cout << (*p).first << " " << (*p).second << endl;

    a.erase("dog");
    iterator(a);

    auto p1 = a.find("dog");
    if (p1 != a.end()) {
        cout << (*p1).first << " " << (*p1).second << endl;
    }
    

    return 0;
}
