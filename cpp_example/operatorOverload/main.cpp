#include <iostream>
#include "coordinate.h"

using namespace std;

int main(void) {
    Coordinate b(1, 2);
    b.show();

    Coordinate c(3, 5);
    c.show();
    
    Coordinate a;
    a.show();
    //a = b + c;
    a = b.operator+(c);
    a.show();
    
    a = c;
    a.show();
    
    //c += b;
    c.operator+=(b);
    c.show();
    
    cout << "-------------------------" << endl;
    
    Coordinate d = b;
    d.show();
    Coordinate e(c);
    e.show();
    
    d = b;
    d.show();
    
    int aa;
    int bb;
    aa = bb = 9;
    
    cout << "-------------------------" << endl;
    b.show();
    a = b++;
    a.show();
    b.show();
    
    a = ++b;
    a.show();
    b.show();
    
    cout << "-------------------------" << endl;
    a.show();
    b.show();
    c.show();
    a = c - b;
    a.show();
    

    return 0;
}