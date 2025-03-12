#ifndef _ADAPTER_H_
#define _ADAPTER_H_

class Deque {
public:
    void pushBack(int a);
    void pushFront(int a);
    int popBack();
    int popFront();
};


class Sequence {
public:
    virtual void push(int a) = 0;
    virtual int pop() = 0;

    virtual ~Sequence() {};
};

class Stack : public Sequence {
public:
    void push(int a);
    int pop();

private:
    Deque d;    
};

class Queue : public Sequence {
public:
    void push(int a);
    int pop();

private:
    Deque d;    
};


#endif
