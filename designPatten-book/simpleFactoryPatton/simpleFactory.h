#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_

#include <string>
using namespace std;

class Operation {
public:
    Operation() {}
    virtual ~Operation() {}

    virtual double getResult() = 0;
    virtual void setNumAB(double n1, double n2) = 0;
    
protected:
    double numA;
    double numB;
};

class Add : public Operation {
public:
    double getResult() {
        return numA + numB;
    }

    void setNumAB(double n1, double n2) {
        numA = n1;
        numB = n2;
    }
};

class Sub : public Operation {
public:
    double getResult() {
        return numA - numB;
    }

    void setNumAB(double n1, double n2) {
        numA = n1;
        numB = n2;
    }    
};

class Mul : public Operation {
public:
    double getResult() {
        return numA * numB;
    }

    void setNumAB(double n1, double n2) {
        numA = n1;
        numB = n2;
    }    
};


class Div : public Operation {
public:
    double getResult() {
        if (numB != 0) {
            return numA / numB;
        }
    }

    void setNumAB(double n1, double n2) {
        numA = n1;
        numB = n2;
    }    
};

class OperationFactory {
public:
    Operation* produce(string po);
};

#endif
