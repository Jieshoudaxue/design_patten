#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(void) {
    array<int, 3> c;
    cout << "c[0] = " << c[0] << endl;
    cout << "c[30] = " << c[30] << endl;
    c[4] = 9;
    cout << "c[4] = " << c[4] << endl;

    array<int, 3> a = {1, 3, 5};
    array<int, 3> b = {2, 4, 6};
    a = b;
    cout << "a.at(0) = " << a.at(0) << endl;
    //cout << "a.at(0) = " << a.at(3) << endl;
    cout << "a.front() = " << a.front() << endl;
    cout << "a.back() = " << a.back() << endl;

    int* pi = a.data();
    cout << "*pi++ = " << *pi++ << endl;
    cout << "*pi++ = " << *pi++ << endl;
    cout << "*pi++ = " << *pi++ << endl;
    cout << "*pi++ = " << *pi++ << endl;
    
    cout << "a.empty() = " << a.empty() << endl;
    cout << true << endl;
    cout << "a.size() = " << a.size() << endl;
    cout << "a.max_size() = " << a.max_size() << endl;
    
    array<int, 0> d;
    cout << "d.empty() = " << d.empty() << endl;
    
    a.fill(8);
    cout << "a.at(0) = " << a.at(0) << endl;
    cout << "a.at(1) = " << a.at(1) << endl;
    cout << "a.at(2) = " << a.at(2) << endl;
    
    array<int, 3> e = {1, 3, 5};
    array<int, 3> f = {2, 4, 6};    
    e.swap(f);
    cout << "e.at(0) = " << e.at(0) << endl;
    cout << "e.at(1) = " << e.at(1) << endl;
    cout << "e.at(2) = " << e.at(2) << endl;
    cout << "f.at(0) = " << f.at(0) << endl;
    cout << "f.at(1) = " << f.at(1) << endl;
    cout << "f.at(2) = " << f.at(2) << endl;   
    
    a = b;

    if (e == f) {
        cout << "e==f" << endl;
    } else if (a == b) {
        cout << "a == b" << endl;
    }
    
    cout << get<0>(a) << endl;
    cout << get<1>(a) << endl;
    cout << get<2>(a) << endl;

    array<int, 3> g = {1, 3, 5};
    array<int, 3> h = {2, 4, 6}; 
    swap(g, h);
    cout << "g.at(0) = " << g.at(0) << endl;
    cout << "g.at(1) = " << g.at(1) << endl;
    cout << "g.at(2) = " << g.at(2) << endl;
    cout << "h.at(0) = " << h.at(0) << endl;
    cout << "h.at(1) = " << h.at(1) << endl;
    cout << "h.at(2) = " << h.at(2) << endl;   

    cout << tuple_size<array<int, 3>>::value << endl;
    
    cout << is_same<tuple_element<0, decltype(a)>::type, int>::value << endl;
    
    cout << *(a.begin()) << endl;
    
    array<int, 3>::iterator p = NULL;
    for(p = a.begin(); p!= a.end(); p++) {
        cout << *p << endl;
    }
    
    return 0;
}
