#include <iostream>
#include "coordinate.h"

using namespace std;

void Coordinate::show(void) {
    cout << "x = " << x << ", y = " << y << endl;
}

Coordinate Coordinate::operator+(const Coordinate& another) {
    Coordinate tmp;
    tmp.x = this->x + another.x;
    tmp.y = this->y + another.y;
    
    return tmp;
}

Coordinate operator-(const Coordinate& one, const Coordinate& two) {
    Coordinate tmp;
    tmp.x = one.x - two.x;
    tmp.y = one.y - two.y;
    return tmp;
}


void Coordinate::operator+=(const Coordinate& another) {
    this->x = this->x + another.x;
    this->y = this->y + another.y;
}

Coordinate& Coordinate::operator=(const Coordinate& another) {
    if (this != &another) {
        this->x = another.x;
        this->y = another.y;
    }
    return *this;
}