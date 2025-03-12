#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <string>
#include <mutex>
using namespace std;

class Singleton {
public:
    // 禁用拷贝构造函数和拷贝赋值运算符以防止复制
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // 提供一个访问单例实例的静态方法
    static Singleton& Instance() {
        static Singleton instance;  // 局部静态变量，首次调用时初始化，之后再调用不会重新初始化
        return instance;
    }

    void print_test_a() {
        cout << "test_a: " << test_a << endl;
    }

private:
    // 私有构造函数确保不可以从外部实例化
    Singleton() {}
    // init test_a with a magic number
    int test_a = 2324;
};

#endif
