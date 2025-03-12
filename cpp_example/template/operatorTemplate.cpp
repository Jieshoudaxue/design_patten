#include <iostream>

using namespace std;

template <typename T>
class Coordinate {
public:
    Coordinate() {}
    Coordinate(T p1, T p2):x(p1), y(p2) {}

    Coordinate<T> operator+(const Coordinate<T>& other);
    void operator+=(const Coordinate<T>& other);
    
    void toString() {
        cout << "x = " << x << ", y = " << y << endl;
    }
    
private:
    T x;
    T y;
};

template <typename T>
Coordinate<T> Coordinate<T>::operator+(const Coordinate<T>& other) {
    Coordinate<T> tmp;
    tmp.x = this->x + other.x;
    tmp.y = this->y + other.y;
    return tmp;
}

template <typename T>
void Coordinate<T>::operator+=(const Coordinate<T>& other) {
    this->x += other.x;
    this->y += other.y;
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
