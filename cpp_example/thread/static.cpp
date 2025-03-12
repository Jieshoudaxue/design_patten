#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

class Ycao {
public:
    Ycao();
    ~Ycao();
    //void foo(){       //invalid
    static void foo(){        
        // 模拟耗费大量资源的操作
        while (1) {
            cout << "ycao" << endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        
    }    
private:
    thread mthread;
};

Ycao::Ycao() {
    mthread = thread(foo);
}

Ycao::~Ycao() {
    if(mthread.joinable()) {
        mthread.join();
    } 
}


int main()
{
    Ycao y;
 
    std::cout << "done!\n";
}