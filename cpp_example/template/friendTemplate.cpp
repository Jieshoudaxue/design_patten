#include <iostream>

using namespace std;

template <typename T> class Coordinate;
template <typename T> void test3(const Coordinate<T>& pc);

template <typename T>
class Coordinate {
public:
    Coordinate() {}
    Coordinate(T p1, T p2):x(p1), y(p2) {}
    
    friend void test1(const Coordinate<int>& pc);
    
    friend void test2(const Coordinate<T>& pc) {
        cout << "in test2, pc.x = " << pc.x << ", pc.y = " << pc.y << endl;
    }
    
    friend void test3<T>(const Coordinate<T>& pc);
    
    template <typename Y> friend void test4(const Coordinate<Y>& pc);
    
private:
    T x;
    T y;
};

void test1(const Coordinate<int>& pc) {
    cout << "in test1, pc.x = " << pc.x << ", pc.y = " << pc.y << endl;
}

template <typename T>
void test3(const Coordinate<T>& pc) {
    cout << "in test3, pc.x = " << pc.x << ", pc.y = " << pc.y << endl;
}

template <typename T>
void test4(const Coordinate<T>& pc) {
    cout << "in test4, pc.x = " << pc.x << ", pc.y = " << pc.y << endl;
}


int main(void) {
    Coordinate<int> c1(2, 3);
    Coordinate<double> c2(4.4, 9.8);
    test1(c1);
    
    test2(c1);
    test2(c2);
    
    test3(c1);
    test3(c2);

    test4(c1);
    test4(c2);    
    
    return 0;
}
