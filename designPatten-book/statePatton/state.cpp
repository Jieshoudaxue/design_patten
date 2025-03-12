#include <iostream>
#include "state.h"

using namespace std;

void Forenoon::coding(Work* pw) {
    if (pw->getHour() < 12) {
        cout << "current time is " << pw->getHour() << ", very good work" << endl;
    } else {
        pw->setState(new Noon());
        pw->coding();
    }
}

void Noon::coding(Work* pw) {
    if (pw->getHour() < 14) {
        cout << "current time is " << pw->getHour() << ", not good work" << endl;
    } else {
        pw->setState(new AfterNoon());
        pw->coding();
    }
}

void AfterNoon::coding(Work* pw) {
    if (pw->getHour() < 17) {
        cout << "current time is " << pw->getHour() << ", not bad work" << endl;
    } else {
        pw->setState(new Evening());
        pw->coding();
    }
}

void Evening::coding(Work* pw) {
    if (pw->getHour() < 20) {
        cout << "current time is " << pw->getHour() << ", very bad work" << endl;
    } else {
        pw->setState(new Rest());
        pw->coding();
    }
}

void Rest::coding(Work* pw) {
    cout << "current time is " << pw->getHour() << ", finish work" << endl;
}

