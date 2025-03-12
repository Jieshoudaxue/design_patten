#include <iostream>
#include "singleton.h"

using namespace std;

TaskManager* TaskManager::tm = NULL;

TaskManager* TaskManager::getInstance() {
    if (tm == NULL) {
        tm = new TaskManager();
    }

    return tm;
}

void TaskManager::releaseInstance() {
    if (tm != NULL) {
        delete tm;
    }
}

void TaskManager::displayProcess() {
    cout << "there are many processes" << endl;
}

void TaskManager::displayService() {
    cout << "there are many service" << endl;

}


