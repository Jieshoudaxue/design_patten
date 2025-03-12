#include <iostream>
#include "memento.h"

using namespace std;

int main(void) {
    GameRole* pg = new GameRole();

    pg->show();
    Caretaker* pc = new Caretaker();
    pc->setPm(pg->saveState());

    pg->fightBoss();
    pg->show();

    pg->recoveryState(pc->getPm());
    pg->show();

    pg->fightBoss();
    pg->show();
    
    pc->setPm(pg->saveState());
    pg->recoveryState(pc->getPm());
    pg->show();        


    delete pg;
    delete pc;
    return 0;
}
