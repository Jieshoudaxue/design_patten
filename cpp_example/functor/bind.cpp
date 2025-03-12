#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
 
int TestFunc(int a, char c, float f)
{
    cout << a << " " << c << " " << f << endl;
 
    return a;
}
 
bool comp(int a, int b, int c) {
    return a > b;
}

int main()
{
    auto bindFunc1 = bind(TestFunc, std::placeholders::_1, 'A', 100.1);
    bindFunc1(10);
 
    cout << "=================================\n";
 
    auto bindFunc2 = bind(TestFunc, std::placeholders::_2, std::placeholders::_1, 100.1);
    bindFunc2('B', 10);
 
    cout << "=================================\n";
 
    auto bindFunc3 = bind(TestFunc, std::placeholders::_2, std::placeholders::_3, std::placeholders::_1);
    bindFunc3(100.1, 30, 'C');

    cout << "=================================\n";
    
    vector<int> v = {5, 3, 6, 9};
    sort(v.begin(), v.end(), bind(comp, std::placeholders::_1, std::placeholders::_2, 1111));
    for (auto item : v) {
        cout << item << " ";
    }
    cout << endl;
    
    return 0;
}