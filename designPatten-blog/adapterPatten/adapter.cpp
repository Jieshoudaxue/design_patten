#include <iostream>
#include "adapter.h"

using namespace std;

void Deque::pushBack(int a) {
    cout << "deque push back: " << a << endl;
}
void Deque::pushFront(int a) {
    cout << "deque push frout: " << a << endl;
}
int Deque::popBack() {
    cout << "deque pop back: 3" << endl;
    return 3;
}
int Deque::popFront() {
    cout << "deque pop front: 5" << endl;
    return 5;
}

void Stack::push(int a) {
    d.pushBack(a);
    cout << "stack push: " << a << endl;
}
int Stack::pop() {
    int tmp = d.popBack();
    cout << "stack pop: " << tmp << endl;
    return tmp;
}

void Queue::push(int a) {
    d.pushBack(a);
    cout << "Queue push: " << a << endl;
}
int Queue::pop() {
    int tmp = d.popFront();
    cout << "Queue pop: " << tmp << endl;
    return tmp;
}


