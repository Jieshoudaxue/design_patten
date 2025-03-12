#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <functional>
#include <utility>
using namespace std;

int main(void) {
    string y = "ycao";
    string m = "miao";
    cout << "y = " << y << "  " << "m = " << m << endl;
    swap(y, m);
    cout << "y = " << y << "  " << "m = " << m << endl;
    
    return 0;
}


