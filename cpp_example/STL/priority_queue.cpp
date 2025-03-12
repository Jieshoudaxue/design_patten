#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stack>
#include <queue>
using namespace std;

template <typename T>
void printPriorityQueue(T q) {
    while (!q.empty()) {
        cout << q.top() << endl;
        q.pop();
    }
}

int main(void) {
    priority_queue<int> q1;
    q1.push(3);
    q1.push(2);
    q1.push(8);
    cout << "size = " << q1.size() << endl;
    cout << "top = " << q1.top() << endl;
    printPriorityQueue(q1);

    priority_queue<int, vector<int>, std::greater<int>> q2;
    q2.push(3);
    q2.push(2);
    q2.push(8);    
    cout << "top = " << q2.top() << endl;
    printPriorityQueue(q2);

    return 0;
}
