#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(void) {
    auto iterator = [](map<string, int> a) {
        int i = 0;
        for(auto item : a) {
            cout << i++ << " " << item.first << " " << item.second << endl;
        }
    };
    
    map<string, int> a;
    a["dog"] = 9;
    a["cat"] = 7;
    a["bird"] = 3;

    cout << a["cat"] << endl;
    //cout << a["apple"] << endl;
    for(auto item : a) {
        cout << item.first << " " << item.second << endl;
    }

    a.emplace("apple", 10);
    iterator(a);

    map<string, int> b = a;

    a.erase("dog");
    iterator(a);

    a.swap(b);
    iterator(b);

    auto p = a.find("cat");
    cout << (*p).first << " " << (*p).second << endl;

    b.clear();
    iterator(b);

    map<string, int, greater<string>> c;
    c["dog"] = 19;
    c["apple"] = 17;
    c["bird"] = 13;
    for(auto item : c) {
        cout << item.first << " " << item.second << endl;
    }

    cout << "-------------------------" << endl;

    std::map<string, std::vector<int>> m1;
    string s1("ycao");
    string s2("miao");
    m1[s1].push_back(11);
    m1[s1].push_back(12);
    m1[s2].push_back(21);
    m1[s2].push_back(22);
    cout << m1[s1][0] << " " << m1[s2][0] << endl;
    
    for (auto& item : m1[s1]) {
        cout << item << " ";
    }
    cout << endl;

    for (auto& item : m1[s2]) {
        cout << item << " ";
    }
    cout << endl;

    string& rs1 = s1;
    string& rs2 = s2;
    cout << m1[rs1][0] << " " << m1[rs2][0] << endl;

    auto p1 = m1.find(s1);
    cout << (*p1).first << endl;
    for (auto item : (*p1).second) {
        cout << item << " ";
    }
    cout << endl;

    cout << "-------------------------" << endl;
    std::map<string, std::vector<std::pair<int, int>>> m2;
    m2["ycao"].push_back(std::make_pair(51, 52));
    m2["ycao"].push_back(std::make_pair(61, 62));
    for (auto item : m2["ycao"]) {
        cout << item.first << " " << item.second << " ";
    }
    cout << endl;

    m2["miao"].push_back(pair<int, int>(91, 92));
    m2["miao"].push_back(pair<int, int>(81, 82));
    for (auto item : m2["miao"]) {
        cout << item.first << " " << item.second << " ";
    }
    cout << endl;


    return 0;
}
