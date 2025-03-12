#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <vector>

class BarbecueMaster {
public:
    void makeMutton();
    void makeChiken();
};

class Command {
public:
    Command() { 
        bm = NULL;
    }
    Command(BarbecueMaster* pbm):bm(pbm) {}
    virtual ~Command() {}

    virtual void exeCmd() = 0;
protected:
    BarbecueMaster* bm;
};

class MakeMutton : public Command {
public:
    MakeMutton(BarbecueMaster* pbm):Command(pbm) {}
    void exeCmd() {
        bm->makeMutton();
    }
};

class MakeChiken : public Command {
public:
    MakeChiken(BarbecueMaster* pbm):Command(pbm) {}
    void exeCmd() {
        bm->makeChiken();
    }
};

class Waiter {
public:
    Waiter() {}
    ~Waiter() {
        int size = cmdVct.size();
        for (int i = 0; i < size; i ++) {
            delete cmdVct[i];
        }
    }

    void addCmd(Command* pc);
    void rmCmd(Command* pc);
    void submitCmd();
private:
    std::vector<Command *> cmdVct;
};


#endif
