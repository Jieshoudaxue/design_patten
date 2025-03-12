#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <functional>
using namespace std;

int main(void) {
    vector<int> v = {5, 2, 8, 9};

    int num = count(v.begin(), v.end(), 8);
    cout << num << endl;

    int evenNum = count_if(v.begin(), v.end(), [](const int& p){return p%2 == 0;});
    cout << evenNum << endl;

    return 0;
}


