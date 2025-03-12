#ifndef _STATE_H_
#define _STATE_H_

class Work;

class State {
public:
    State() {}
    virtual ~State() {}
    virtual void coding(Work* pw) = 0;
};

class Forenoon : public State {
public:
    void coding(Work* pw);
};

class Noon : public State {
public:
    void coding(Work* pw);
};

class AfterNoon : public State {
public:
    void coding(Work* pw);
};

class Evening : public State {
public:
    void coding(Work* pw);
};

class Rest : public State {
public:
    void coding(Work* pw);
};

class Work {
public:
    Work() {
        ps = new Forenoon();
        hour = 8;
        isFinish = false;
    }
    ~Work() {
        delete ps;
    }

    int getHour() {
        return hour;
    }
    void setHour(int h) {
        hour = h;
    }
    
    void setState(State* rs) {
        if (ps != NULL) {
            delete ps;
            ps = rs;
        }
    }

    void coding() {
        this->ps->coding(this);
    }

private:
    State* ps;
    int hour;
    bool isFinish;
};

#endif
