#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <string>
#include <mutex>
using namespace std;

class Singleton {
public:
    static Singleton* getPi() {
        //两次判断pi，双重锁定
        if (pi == NULL) {
            mtx.lock();
            if (pi == NULL) {
                pi = new Singleton();
            }
            mtx.unlock();
        }
        return pi;
    }
    ~Singleton() {
        cout << "~Singleton()" << endl;
    }

private:
    static mutex mtx;
    static Singleton* pi;
    Singleton() {}
};

#endif
