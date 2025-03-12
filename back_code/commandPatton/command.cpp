#include <iostream>
#include "command.h"
#include<algorithm>

using namespace std;

void BarbecueMaster::makeMutton() {
    cout << "make mutton" << endl;
}
void BarbecueMaster::makeChiken() {
    cout << "make chiken" << endl;
}

void Waiter::addCmd(Command* pc) {
    cmdVct.push_back(pc);
}
void Waiter::rmCmd(Command* pc) {
    vector<Command*>::iterator index = find(cmdVct.begin(), cmdVct.end(), pc);
    if (index != cmdVct.end()) {
        cmdVct.erase(index);
    }
}
void Waiter::submitCmd() {
    for (vector<Command*>::iterator item = cmdVct.begin(); item != cmdVct.end(); item ++) {
        (*item)->exeCmd();
    }
}

