#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(void) {
    typedef tuple<string, int, int> student;
    student s = make_tuple("ycao", 28, 169);
    student s1("miao", 18, 167);

    cout << get<0>(s) << " " << get<1>(s) << " " << get<2>(s) << endl;

    string n;
    int age;
    int high;
    tie(n, age, high) = s1;
    cout << n << " " << age << " " << high << endl;

    get<0>(s) = "yiyi";
    tie(n, ignore, ignore) = s;
    cout << n << endl;

    return 0;
}
