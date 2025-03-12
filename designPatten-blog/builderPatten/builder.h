#ifndef _BUILDER_H_
#define _BUILDER_H_

class Builder {
public:
    virtual void buildeHead() {}
    virtual void buildeArm() {}
    virtual void buildeBody() {}
    virtual void buildeLeg() {}

    virtual ~Builder() {}
};

class BuilderMan       : public Builder {
public:
    void buildeHead();
    void buildeArm();
    void buildeBody();
    void buildeLeg();
};

class BuilderWomen        : public Builder {
public:
    void buildeHead();
    void buildeArm();
    void buildeBody();
    void buildeLeg();
};

class Director {
public:
    Director() {}
    Director(Builder *bp) {
        b = bp;
    }

    void create();

private:
    Builder* b;
};

#endif