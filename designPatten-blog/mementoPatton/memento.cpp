#include <iostream>
#include "memento.h"

using namespace std;

Memento YiDaShi::save() {
    Memento m(vitality, attack, defense);
    return m;
}
void YiDaShi::load(Memento m) {
    vitality = m.getVitality();
    attack = m.getAttack();
    defense = m.getDefense();
}
void YiDaShi::show() {
    cout << "vitality = " << vitality << endl;
    cout << "attack = "<< attack << endl;
    cout << "defense = "<< defense << endl;
}
void YiDaShi::beat() {
    vitality -= 10;
    attack -= 10;
    defense -= 10;
}

