#include <iostream>

using namespace std;

enum Day {
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN,
};

int main(void) {
    int d1 = MON;
    cout << "d1 = " << d1 << endl;
    
    enum Day d2 = WED;
    cout << "d2 = " << d2 << endl;
    
    enum Day d3 = Day::SUN;
    cout << "d3 = " << d3 << endl;    

    Day d4 = Day::FRI;
    cout << "d4 = " << d4 << endl;    
    
    return 0;
}

