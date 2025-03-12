#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(void) {
    pair<int, double> p(2, 2.5);
    cout << p.first << " " << p.second << endl;

    pair<int, double> p1 = make_pair(1, 1.5);
    cout << p1.first << " " << p1.second << endl;

    pair<string, int> p2 = make_pair("ycao", 28);
    cout << p2.first << " " << p2.second << endl;

    pair<int,  pair<string, int> > p3(3, p2);
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;

    typedef pair<int,  pair<string, int> > mypair;
    mypair p4 = make_pair(4, p2);
    cout << p4.first << " " << p4.second.first << " " << p4.second.second << endl;
    p4.first = 8;
    cout << p4.first << endl;

    return 0;
}
