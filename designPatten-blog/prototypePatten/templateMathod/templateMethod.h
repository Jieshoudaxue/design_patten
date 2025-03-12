#ifndef _TEMPLATEMETHOD_H_
#define _TEMPLATEMETHOD_H_

class Resume {
public:
    void fillResume() {
        setPersonInfo();
        setEducation();
        setWorkExp();
    }

    virtual ~Resume() {}
    
protected:
    virtual void setPersonInfo() {}
    virtual void setEducation() {}
    virtual void setWorkExp() {}
};

class ResumeA : public Resume {
protected:
    void setPersonInfo();
    void setEducation();
    void setWorkExp();
};

class ResumeB : public Resume {
protected:
    void setPersonInfo();
    void setEducation();
    void setWorkExp();
};


#endif