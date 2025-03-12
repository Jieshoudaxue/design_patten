#include <iostream>
#include "state.h"

using namespace std;

void PropahseState::currentState(War* pw) {
    int days = pw->getDuration();
    if (days < 10) {
        cout << days << "days, in propahse of war, The two sides tried each other" << endl;
    } else {
        State* ps = new MetaphaseState();
        cout << "new state: " << ps << endl;
        pw->setCurState(ps);
        pw->getCurState();
    }
 }
void MetaphaseState::currentState(War* pw) {
    int days = pw->getDuration();
    if (days < 20) {
        cout << days << "days, in metaphase of war, Each has its own victory or defeat" << endl;
    } else {
        State* ps = new AnaphaseState();
        cout << "new state: " << ps << endl;
        pw->setCurState(ps);
        pw->getCurState();
    }
}
void AnaphaseState::currentState(War* pw) {
    int days = pw->getDuration();
    if (days < 30) {
        cout << days << "days, in anaphase of war, Fight to death" << endl;
    } else {
        State* ps = new EndState();
        cout << "new state: " << ps << endl;

        pw->setCurState(ps);
        pw->getCurState();
    }

}
void EndState::currentState(War* pw) {
    cout << "war is over" << endl;
}

