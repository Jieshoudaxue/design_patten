#include <iostream>
#include "observer.h"

using namespace std;

void Blog::attach(Observer *po) {
    lo.push_back(po);
}
void Blog::remove(Observer* pr) {
    lo.remove(pr);
}
void Blog::notify() {
    list<Observer*>::iterator item = lo.begin();
    for (; item != lo.end(); item ++) {
        (*item)->update();
    }
}


