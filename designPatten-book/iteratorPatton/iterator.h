#ifndef _ITERATOR_H_
#define _ITERATOR_H_

#include <string>
#include <vector>
using namespace std;

class Iterator {
public:
    Iterator() {}
    virtual ~Iterator() {}
    virtual string& getFirst() {}
    virtual string& next() {}
    virtual bool isDone() {}
    virtual string& curItem() {}
};

class Aggregate {
public:
    Aggregate() {
        index = 0;
    }
    ~Aggregate() {}
    void setName(string rn) {
        name[index++] = rn;
    }
    string& getName(int id) {
        return name[id];
    }
    int getIndex() {
        return index;
    }
private:
    string name[10];
    int index;
};

class RealIterator : public Iterator {
public:
    RealIterator() {
        pa = NULL;
        current = 0;
    }
    RealIterator(Aggregate* ra):pa(ra) {}
    ~RealIterator() {}
    string& getFirst() {
        return pa->getName(0);
    }
    string& next() {
        current ++;    
    }
    bool isDone() {
        return current >= pa->getIndex() ? true : false;
    }
    string& curItem() {
        return pa->getName(current);
    }

private:
    Aggregate* pa;
    int current;
};

#endif
