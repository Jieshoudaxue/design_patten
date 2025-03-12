#ifndef _STATE_H_
#define _STATE_H_

#include <iostream>
using namespace std;

class War;

class State {
public:
    virtual void currentState(War* pw) {}
};

class War {
public:
    War() {
        curState = NULL;
    }
    War(State* ps):curState(ps), duration(0) {}
    ~War() {
        delete curState;
        cout << "delete state: "<< curState << endl;
    }

    int getDuration() {
        return duration;
    }
    void setDuration(int d) {
        duration = d;
    }
    void setCurState(State* ps) {
        delete curState;
        cout << "delete state: "<< curState << endl;
        curState = ps;
    }
    void getCurState() {
        curState->currentState(this);
    }
private:
    State* curState;
    int duration;
};

class PropahseState : public State {
public:
    void currentState(War * pw);
};

class MetaphaseState : public State {
public:
    void currentState(War * pw);
};

class AnaphaseState : public State {
public:
    void currentState(War * pw);
};

class EndState : public State {
public:
    void currentState(War * pw);
};

#endif
