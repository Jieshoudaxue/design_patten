#ifndef _FACADE_H_
#define _FACADE_H_

using namespace std;

class Stock {
public:
    void buy() {
        cout << "buy maotai stock" << endl;
    }
    void sell() {
        cout << "sell maotai stock" << endl;
    }

};

class NationalDebt {
public:
    void buy() {
        cout << "buy 5 years national debt" << endl;
    }
    void sell() {
        cout << "sell 5 years national debt" << endl;
    }    
};

class Realty {
public:
    void buy() {
        cout << "buy Wanke realty" << endl;
    }
    void sell() {
        cout << "sell Wanke realty" << endl;
    }

};

class Fund {
public:
    void buy() {
        s.buy();
        nd.buy();
        r.buy();
    }

    void sell() {
        s.sell();
        nd.sell();
        r.sell();
    }

private:
    Stock s;
    NationalDebt nd;
    Realty r;
};


#endif
