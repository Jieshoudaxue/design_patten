#ifndef _MEMENTO_H_
#define _MEMENTO_H_

#include <string>
using namespace std;

class Memento {
public:
    Memento() {}
    Memento(int rv, int ra, int rd):vitality(rv), attack(ra), defense(rd) {}
    ~Memento() {}

    int getVitality() {
        return vitality;
    }
    int getAttack() {
        return attack;
    }
    int getDefense() {
        return defense;
    }
private:
    int vitality;
    int attack;
    int defense;    
};


class GameRole {
public:
    GameRole() {
        vitality = 100;
        attack = 100;
        defense = 100;
    }
    ~GameRole() {}
    void fightBoss() {
        vitality = 0;
        attack = 0;
        defense = 0;
    }
    Memento* saveState() {
        return new Memento(vitality, attack, defense);
    }
    void recoveryState(Memento* rm) {
        vitality = rm->getVitality();
        attack = rm->getAttack();
        defense = rm->getDefense();
    }
    void show() {
        cout << "vitality = " << vitality << ", attack = " << attack << ", defense = " << defense << endl;
    }

private:
    int vitality;
    int attack;
    int defense;
};

class Caretaker {
public:
    Caretaker():pm(NULL) {}
    ~Caretaker() {
        if (pm != NULL) {
            delete pm;
        }
    }
    void setPm(Memento* rm) {
        if (pm == NULL) {
            pm = rm;
        } else {
            delete pm;
            pm = rm;
        }
    }
    Memento* getPm() {
        return pm;
    }
private:
    Memento* pm;
};

#endif
