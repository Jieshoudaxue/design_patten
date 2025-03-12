#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <functional>
using namespace std;

int main(void) {
    string s = "ycao";
    transform(s.begin(), s.end(), s.begin(), [](char p){return toupper(p);});

    cout << s << endl;

    return 0;
}


