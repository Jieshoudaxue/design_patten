#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Barbecuer {
public:
    void bakeMutton() {
        cout << "bake mutton" << endl;
    }

    void bakeChicken() {
        cout << "bake chicken" << endl;
    }
};

class Command {
public:
    Command() {}
    Command(Barbecuer* rb):pb(rb) {}
    virtual ~Command() {}
    virtual void excuteCmd() {}
    virtual void toString() {}
protected:
    Barbecuer* pb;
};

class BakeMtn : public Command {
public:
    BakeMtn() {}
    BakeMtn(Barbecuer* rb):Command(rb) {}
    void excuteCmd() {
        pb->bakeMutton();
    }
    void toString() {
        cout << "add mutton in cmd" << endl;
    }
};

class BakeChk : public Command {
public:
    BakeChk() {}
    BakeChk(Barbecuer* rb):Command(rb) {}
    void excuteCmd() {
        pb->bakeChicken();
    }
    void toString() {
        cout << "add chicken in cmd" << endl;
    }    
};

class Waiter {
public:
    void setCmd(Command* rc) {
        pcmd.push_back(rc);
        rc->toString();
    }
    void cancelCmd(Command* rc) {
        vector<Command*>::iterator p = find(pcmd.begin(), pcmd.end(), rc);
        pcmd.erase(p);
        cout << "erase a cmd" << endl;
    }
    void notify() {
        vector<Command*>::iterator p;
        for (p = pcmd.begin(); p != pcmd.end(); p++) {
            (*p)->excuteCmd();
        }
    }
private:
    vector<Command*> pcmd;
};

#endif
