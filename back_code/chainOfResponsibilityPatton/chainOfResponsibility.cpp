#include <iostream>
#include "chainOfResponsibility.h"

using namespace std;

void CommonManager::handleReq(string n, int num) {
    if (num < 500) {
        cout << "CommonManager " << name << " agree " << n << " plus " << num << endl;
    } else {
        cout << "CommonManager " << name << " can not handle this req, move it to Majordomo" << endl;
        m->handleReq(n, num);
    }
}

void Majordomo::handleReq(string n, int num) {
    if (num < 1000) {
        cout << "Majordomo " << name << " agree " << n << " plus " << num << endl;
    } else {
        cout << "Majordomo " << name << " can not handle this req, move it to GeneralManager" << endl;
        m->handleReq(n, num);
    }
}

void GeneralManager::handleReq(string n, int num) {
    cout << "GeneralManager " << name << " agree " << n << " plus " << num << endl;
}





