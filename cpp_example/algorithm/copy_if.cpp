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

    vector<int> vBak;
    copy(v.begin(), v.end(), back_inserter(vBak));
    
    auto print = [](vector<int>& v){
        for (auto& item : v) {
            cout << item << " ";
        }
        cout << endl;
    };
    print(vBak);

    vBak.clear();
    copy_if(v.begin(), v.end(), back_inserter(vBak), [](const int& p){return p%2 == 0;});
    print(vBak);

    return 0;
}


