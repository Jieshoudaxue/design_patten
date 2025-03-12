#include <iostream>
#include "singleton.h"

using namespace std;

int main(void) {
    TaskManager* temp = TaskManager::getInstance();
    temp->displayProcess();
    temp->displayService();

    TaskManager* temp1 = TaskManager::getInstance();
    temp1->displayProcess();
    temp1->displayService();


    TaskManager::releaseInstance();
    
    return 0;
}
