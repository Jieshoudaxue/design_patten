#ifndef _BRIDGE_H_
#define _BRIDGE_H_

class Os {
public:
    virtual void inputOs() {}
};

class Windows : public Os {
public:
    void inputOs();
};

class Linux : public Os {
public:
    void inputOs();
};

class MacOs : public Os {
public:
    void inputOs();
};

class Pc {
public:
    virtual void installOs(Os* os) {}
};

class Lenovo : public Pc {
public:
    void installOs(Os* os);
};

class Apple : public Pc {
public:
    void installOs(Os* os);
};

class Hp : public Pc {
public:
    void installOs(Os* os);
};

#endif
