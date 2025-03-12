#include <iostream>

using namespace std;

template <typename T>
class Coordinate {
public:
    Coordinate() {}
    Coordinate(T p1, T p2):x(p1), y(p2) {}

    void toString() {
        cout << "x = " << x << ", y = " << y << endl;
    }

    template <typename Y> friend Coordinate<Y> operator+(const Coordinate<Y>& one, const Coordinate<Y>& two);
    
    template <typename Y> friend void operator+=(Coordinate<Y>& one, const Coordinate<Y>& two);
    
private:
    T x;
    T y;
};

template <typename T>
Coordinate<T> operator+(const Coordinate<T>& one, const Coordinate<T>& two) {
    Coordinate<T> tmp;
    tmp.x = one.x + two.x;
    tmp.y = one.y + two.y;
    return tmp;
}

template <typename T>
void operator+=(Coordinate<T>& one, const Coordinate<T>& two) {
    one.x = one.x + two.x;
    one.y = one.y + two.y;
}



int main(void) {
    Coordinate<int> c1(2, 3);
    Coordinate<int> c2(5, 8);
    Coordinate<int> c3(0, 0);
    
    Coordinate<double> c4(2.2, 3.3);
    Coordinate<double> c5(5.5, 8.8);
    Coordinate<double> c6(0, 0);
    
    c3 = c1 + c2;
    c6 = c4 + c5;
    c3.toString();
    c6.toString();
    
    c2 += c1;   
    c5 += c4;
    c2.toString();
    c5.toString();
    
   
    return 0;
}
