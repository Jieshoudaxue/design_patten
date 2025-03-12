#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

class Ycao {
public:
    Ycao(int ra) {
        age = ra;
        int a = 9;
        [=](){cout << this->age << " " << a << endl;}();
        [=](){cout << age << " " << a << endl;}();
        [&](){cout << this->age << " " << a << endl;}();
        [&](){cout << age << " " << a << endl;}();
        [&, this](){cout << this->age << " " << a << endl;}();

        [&](){this->test();}();
    }
    void test() {
        cout << "ycao" << endl;
    }
private:
    int age;
};

int main(void) {
    vector<int> v = {2, 8, 6, 10};
    for (auto item : v) {
        cout << item << " ";
    }
    cout << endl;

    cout << boolalpha << all_of(v.begin(), v.end(), [](int i){return i%2 == 0;}) << endl;

    sort(v.begin(), v.end(), [](int a, int b){return a > b;});
    for (auto item : v) {
        cout << item << " ";
    }
    cout << endl;


    struct IsEven {
        bool operator() (int i) {
            return i % 2 == 0;
        }
    };
    cout << boolalpha << all_of(v.begin(), v.end(), IsEven()) << endl;

    [](){}();
    [](){cout << "ycao" << endl;}();
    [](int i){cout << "ycao " << i << endl;}(4);

    auto func = []() ->bool {return true;};
    cout << boolalpha << func() << endl;

    int atest = 4;
    int btest = 6;
    //auto func1 = [=]() {
    //auto func1 = [&]() {
    //auto func1 = [atest, &btest]() {
    auto func1 = [&, atest]() {
        return atest + btest;
    };
    cout << func1() << endl;

    Ycao y(28);

    return 0;
}
