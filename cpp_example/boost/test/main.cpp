#include <iostream>
#include <string>
#include <vector>
#include <boost/version.hpp>
#include <boost/config.hpp>
#include <boost/thread/thread.hpp>
#include <boost/timer/timer.hpp>
using namespace std;

//g++ hello.cpp -o hello -I/usr/local/include  -L/usr/local/lib -lboost_system -lboost_thread

void hello() {
    cout << "hello boost" << endl;
}

int main(void) {

    return 0;
}
