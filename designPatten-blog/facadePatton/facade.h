#ifndef _FACADE_H_
#define _FACADE_H_

#include <iostream>
using namespace std;

class Scanner {
public:
    void scan() {
        cout << "scanner" << endl;
    }

};

class Parser {
public:
    void parse() {
        cout << "parser" << endl;
    }

};

class GenMidCode {
public:
    void genCode() {
        cout << "generate middle code" << endl;
    }

};

class GenMachineCode {
public:
    void genCode() {
        cout << "generate machine code" << endl;
    }

};

class Compiler {
public:
    void run();

private:
    Scanner s;
    Parser p;
    GenMidCode gi;
    GenMachineCode ga;
};

#endif
