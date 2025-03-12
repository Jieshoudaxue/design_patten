#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include <string>
using namespace std;

class CashSuper {
public:
    CashSuper() {}
    virtual ~CashSuper() {}

    virtual double acceptCash(double money) = 0;
};

class CashNormal : public CashSuper {
public:
    double acceptCash(double money) {
        return money;
    }
};

class CashRebate : public CashSuper {
public:
    CashRebate() {
        moneyRebate = 1.0;
    }
    CashRebate(double mr):moneyRebate(mr) {}

    double acceptCash(double money) {
        return money*moneyRebate;
    }
    
private:
    double moneyRebate;
};

class CashReturn : public CashSuper {
public:
    CashReturn() {}
    CashReturn(double mc, double mr):moneyCondition(mc),   moneyReturn(mr) {}

    double acceptCash(double money) {
        double result = money;
        if (money >= moneyCondition) {
            result = money - moneyReturn;
        }
        return result;
    }

private:
    double moneyCondition;
    double moneyReturn;
};

class CashContext {
public:
    CashContext() {
        cs = NULL;
    }
    CashContext(string type) {
        if (type == "normal") {
            cs = new CashNormal();
        } else if (type == "0.8") {
            cs = new CashRebate(0.8);
        } else if (type == "300 back 100"){
            cs = new CashReturn(300, 100);
        }
    }
    ~CashContext() {
        delete cs;
    }
    double getResult(double money) {
        return cs->acceptCash(money);
    }

private:
    CashSuper* cs;
};

#endif
