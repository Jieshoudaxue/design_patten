#ifndef _MEMENTO_H_
#define _MEMENTO_H_

#include <vector>
using namespace std;

class Memento {
public:
    Memento() {}
    ~Memento() {}

    Memento(int v, int a, int d):vitality(a), attack(a), defense(d) {}

    Memento& operator=(const Memento* m) {
        vitality = m->vitality;
        attack = m->attack;
        defense = m->defense;
        
        return *this;
    }

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

class YiDaShi {
public:
    YiDaShi():vitality(100),   attack(100), defense(100) {}
    ~YiDaShi() {}

    Memento save();
    void load(Memento m);
    void show();
    void beat();
    
private:
    int vitality;
    int attack;
    int defense;
};

class Caretake {
public:
    void save(Memento m) {
        vm.push_back(m);
    }
    Memento load(int index) {
        return vm[index];
    }
private:
    vector<Memento> vm;
};


#endif
