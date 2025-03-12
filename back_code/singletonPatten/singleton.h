#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <string>
using namespace std;

class TaskManager {
public:
    static TaskManager* getInstance();
    static void releaseInstance();
    
    void displayProcess();
    void displayService();
    
private:    
    TaskManager() {};
    ~TaskManager() {
        cout << "~TaskManager()" << endl;
    }

    static TaskManager* tm;
};



#endif