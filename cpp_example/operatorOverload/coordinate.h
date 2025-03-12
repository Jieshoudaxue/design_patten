#ifndef _COORDINATE_H_
#define _COORDINATE_H_

#include <iostream>

using namespace std;

class Coordinate {
public:
    Coordinate() {
        x = 0;
        y = 0;
    };
    
    Coordinate(int xv, int yv) {
        x = xv;
        y = yv;
    }
    
    Coordinate(const Coordinate& rc) {
        this->x = rc.x;
        this->y = rc.y;
    } 
    
    Coordinate operator+(const Coordinate& another);
    friend Coordinate operator-(const Coordinate& one, const Coordinate& two);
    
    
    void operator+=(const Coordinate& another);    
    Coordinate& operator=(const Coordinate& another);
    
    void show(void);
    
    //++a
    Coordinate& operator++(void) {
        this->x = this->x + 1;
        this->y = this->y + 1;
        return *this;
    }
    //a++， x只用于重载时区分
    Coordinate operator++(int x) {
        Coordinate tmp = *this;
        this->x = this->x + 1;
        this->y = this->y + 1;
        return tmp;
    }
    
private:
    int x;
    int y;
};



#endif