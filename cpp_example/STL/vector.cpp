#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    auto iterat = [](vector<int> a) {
        vector<int>::iterator p;
        int i = 0;
        cout << "print all parameter, size is = " << a.size() << endl;
        for (p = a.begin(), i = 0; p != a.end(); i++, p++) {
            cout << i << " parameter = " << *p << endl;
        }
    };
    
    vector<int> a;
    vector<int> b;
    a.assign(3, 5);
    cout << "a.at(0) = " << a.at(0) << endl;
    cout << "a.at(1) = " << a.at(1) << endl;
    cout << "a.at(2) = " << a.at(2) << endl;
    
    b = a;
    cout << "b.at(0) = " << b.at(0) << endl;
    cout << "b.at(1) = " << b.at(1) << endl;
    cout << "b.at(2) = " << b.at(2) << endl;
    
    cout << "b[0] = " << b[0] << endl;

    cout << "b.front() = " << b.front() << endl;
    
    cout << "b.back() = " << b.back() << endl;
    
    int* p = b.data();
    cout << "*p++ = " << *p++ << endl;
    cout << "*p++ = " << *p++ << endl;
    cout << "*p++ = " << *p++ << endl;
    
    iterat(b);
    
    cout << true << endl;
    cout << b.empty() << endl;
    cout << b.size() << endl;
    cout << b.max_size() << endl;
    cout << b.capacity() << endl;
    b.reserve(5);
    b.assign(6, 9);
    b.shrink_to_fit();
    cout << b.size() << endl;
    
    b.clear();
    b.assign(1, 9);
    cout << "b.at(0) = " << b.at(0) << endl;
 
    vector<int>::iterator p2 = b.begin();
    b.insert(p2, 3);
    b.insert(++p2, 5);
    iterat(b);
    
    b.emplace(b.end(), 10);
    iterat(b);

    b.erase(b.begin());
    iterat(b);
    b.erase(b.begin(), b.begin()+2);
    iterat(b);
    
    b.push_back(8);
    b.push_back(9);
    b.push_back(10);
    iterat(b);
    
    b.emplace_back(10);
    iterat(b);
    
    b.pop_back();
    b.pop_back();
    iterat(b);
    
    b.resize(1);
    iterat(a);
    iterat(b);

    b.swap(a);
    iterat(a);
    iterat(b);

    swap(a, b);

    cout << "++++++++++++++" << endl;

    vector<int> v1;
    v1.push_back(6);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(8);
    //iterat(v1);
#if 0
    auto itor = v1.begin();
    while (itor != v1.end()) {
        //cout << *itor << endl;
        if (*itor == 1) {
            itor = v1.erase(itor);
        } else {
            itor++;
        }
    }
#endif
    for (auto itor = v1.begin(); itor != v1.end();) {
        if (*itor == 1) {
            itor = v1.erase(itor);
        } else {
            itor++;
        }
    }
    iterat(v1);

    return 0;
}
