#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <functional>
#include <algorithm>
#include <memory>
using namespace std;


int main() {
    int a = 5;
    int &b = a;
    //int &c = 4;       //invalid
    const int &c = 4;   
    const int &c1 = a;
    //string& c2 = "ycao";          //invalid
    //string& c2 = string("miao");  //invalid
    const string& n1 = "miao";      //valid
    const string& n = string("miao");  //valid
    string tmp("miao");
    string& c2 = tmp;

    //int &&d = a;      //invalid
    int &&d = 5;
    cout << d << endl;
    d = 40;
    cout << d << endl;

    string&& s = "ycao";            //Pure value(rvalue)
    string&& s1 = string("miao");   //eXpiring value(rvalue)

    //http://c.biancheng.net/view/7829.html

    return 0;
}