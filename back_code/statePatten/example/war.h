#ifndef _WAR_H_
#define _WAR_H_

class War {
public:
    War() {}
    War(int day):duration(day) {}

    int setDuration(int day) {
        duration = day;
    }
    void showState();

private:
    int duration;
};


#endif
