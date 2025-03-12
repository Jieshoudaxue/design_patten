#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stack>
using namespace std;

template <typename T>
void printStack(T s) {
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}

int main(void) {
    stack<int> s1;
    s1.push(3);
    s1.push(6);
    s1.push(1);
    cout << "size = " << s1.size() << endl;

    printStack(s1);
    return 0;
}
