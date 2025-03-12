#include <iostream>
#include <string>
#include <deque>
#include <vector>
using namespace std;

int main(void) {
    auto iterat = [](deque<int> a) {        
        int i = 0;
        cout << "size is = " << a.size() << endl;
        for (auto p = a.begin(); p != a.end(); p++) {
            cout << i++ << " parameter = " << *p << endl;
        }
    };
    
    deque<int> a;
    deque<int> b;
    
    b.assign(3, 5);
    iterat(b);
    
    a = b;
    iterat(a);
    
    cout << a.at(0) << endl;
    //cout << a.at(3) << endl;
    a.at(0) = 3;
    cout << a.at(0) << endl;
    
    a[1] = 4;
    iterat(a);
    
    cout << a.front() << endl;
    cout << a.back() << endl;
    
    cout << a.empty() << endl;
    cout << a.size() << endl;
    cout << a.max_size() << endl;
    
    a.clear();
    iterat(a);
    
    a.insert(a.begin(), 3);
    a.insert(a.begin(), 4);
    a.insert(a.begin(), 5);
    iterat(a);
    
    a.insert(a.end(), 8);
    a.insert(a.end(), 9);
    a.insert(a.end(), 10);
    iterat(a);    
    
    a.emplace(a.end(), 13);
    iterat(a);    
    
    a.erase(a.begin());
    iterat(a);    

    a.push_back(45);
    iterat(a);    
    a.pop_back();
    iterat(a);    
    a.push_front(45);
    iterat(a);  
    a.pop_front();


    iterat(a);  
    iterat(b);

    a.swap(b);
    iterat(a);  
    iterat(b);


    a.erase(a.begin());
    iterat(a);
    
    cout << a.size() << endl;
    a.resize(5);
    cout << a.size() << endl;
    a.resize(3);
    cout << a.size() << endl;
    iterat(a);
    return 0;
}
