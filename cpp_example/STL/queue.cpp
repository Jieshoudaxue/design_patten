#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stack>
#include <queue>
using namespace std;

template <typename T>
void printQueue(T q) {
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
}

int main(void) {
    queue<int> q1;
    q1.push(3);
    q1.push(2);
    q1.push(8);
    cout << "size = " << q1.size() << endl;
    cout << "front = " << q1.front() << endl;
    cout << "back = " << q1.back() << endl;

    printQueue(q1);

    return 0;
}
