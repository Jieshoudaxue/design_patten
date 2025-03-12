#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <list>
using namespace std;

int main(void) {
    auto iterat = [](list<int> a) {
        list<int>::iterator p;
        int i = 0;
        cout << "size is = " << a.size() << endl;
        for (p = a.begin(), i = 0; p != a.end(); i++, p++) {
            cout << i << " parameter = " << *p << endl;
        }
    };
    list<int> a, b;
    
    b.assign(3, 1);
    iterat(b);
    
    a = b;
    iterat(a);
    
    cout << a.front() << endl;
    cout << a.back() << endl;
    
    cout << a.empty() << endl;
    cout << a.size() << endl;
    cout << a.max_size() << endl;
    
    a.clear();
    iterat(a);
    
    a.insert(a.end(), 1);
    a.insert(a.end(), 2);
    a.insert(a.end(), 3);
    iterat(a);
    
    a.insert(a.begin(), 4);
    a.insert(a.begin(), 5);
    a.insert(a.begin(), 6);
    iterat(a);
    
    a.emplace(a.begin(), 66);
    iterat(a);
    a.erase(a.begin());
    iterat(a);
    
    a.push_back(66);
    iterat(a);
    a.pop_back();
    iterat(a);
    a.push_front(88);
    iterat(a);
    a.pop_front();
    iterat(a);
    
    a.swap(b);
    iterat(a);
    iterat(b);
    
    a.merge(b);
    iterat(a);
    iterat(b);    
    
    b.assign(2, 9);
    iterat(b);    
    
    a.splice(a.end(), b);
    iterat(a);
    iterat(b);    

    a.remove(1);
    iterat(a);
    
    a.reverse();
    iterat(a);
    
    a.unique();
    iterat(a);
    
    a.sort();
    iterat(a);

    list<int>::reverse_iterator p;
    for (p = a.rbegin(); p != a.rend(); p++) {
        cout << "parameter = " << *p << endl;
    }    
    
    return 0;
}
