#ifndef _FACTORYMATHOD_H_
#define _FACTORYMATHOD_H_

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

class IFactory {
public:
    IFactory() {}
    virtual ~IFactory() {}

    virtual Operation* createOpr() = 0;
};

class AddFactory : public IFactory {
public:
    Operation* createOpr() {
        return new Add();
    }
};

class SubFactory : public IFactory {
public:
    Operation* createOpr() {
        return new Sub();
    }
};


#endif
