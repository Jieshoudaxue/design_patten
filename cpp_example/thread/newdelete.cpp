#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

class Ycao {
public:
    Ycao();
    ~Ycao();
    //void foo(){       //invalid
    static void foo();
private:
    thread mthread;
    static bool run;
};

bool Ycao::run = true;

Ycao::Ycao() {
    mthread = thread(foo);
}

Ycao::~Ycao() {
    run = false;
    cout << "~Ycao(), run = " << run << endl;

    if(mthread.joinable()) {
        mthread.join();
    } 
}

void Ycao::foo(){        
    // 模拟耗费大量资源的操作
    while (Ycao::run) {
        cout << "ycao" << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
        
}    


int main()
{
    Ycao *py = new Ycao();

    std::this_thread::sleep_for(std::chrono::seconds(5));

    delete py;

    std::cout << "done!\n";
}