#ifndef _INTERPRETER_H_
#define _INTERPRETER_H_

#include <string>
#include <vector>
using namespace std;

class AbstractNode {
public:
    virtual ~AbstractNode() {}
    virtual string interpret() = 0;
};

class AndNode : public AbstractNode {
public:
    AndNode() {
        pleft = NULL;
        pright = NULL;
    }
    AndNode(AbstractNode* rl, AbstractNode* rr):pleft(rl), pright(rr) {}
    ~AndNode() {
        if (pleft != NULL) {
            cout << "in AndNode, del pleft" << endl;
            delete pleft;
        }
        if (pright != NULL) {
            cout << "in AndNode, del pright" << endl;
            delete pright;
        }
    }

    string interpret() {
        string tmpL, tmpR;
        if (pleft != NULL) {
            tmpL = pleft->interpret();
        }
        if (pright != NULL) {
            tmpR = pright->interpret();
        }

        if (pright == NULL) {
            return tmpL;
        } else {
            return tmpL + " and " + tmpR;
        }   
    }
    
private:
    AbstractNode* pleft;
    AbstractNode* pright;
};

class SentenceNode : public AbstractNode {
public:
    SentenceNode() {
        pDir = NULL;
        pAct = NULL;
        pDis = NULL;
    }
    SentenceNode(AbstractNode* rd, AbstractNode* ra, AbstractNode* rdis):pDir(rd), pAct(ra), pDis(rdis) {}
    ~SentenceNode() {
        if (pDir != NULL) {
            cout << "in SentenceNode, del pDir"; 
            delete pDir;
        }
        if (pAct != NULL) {
            cout << ", del pAct";
            delete pAct;
        }
        if (pDis != NULL) {
            cout << ", del pDis" << endl;
            delete pDis;
        }
    }
    string interpret() {
        string tmpD = pDir->interpret();
        string tmpA = pAct->interpret();
        string tmpDis = pDis->interpret();
        return tmpD + " " + tmpA + " " + tmpDis;
    }
    
private:
    AbstractNode* pDir;
    AbstractNode* pAct;
    AbstractNode* pDis;
};

class DirectionNode : public AbstractNode {
public:
    DirectionNode() {}
    DirectionNode(string rd):dir(rd) {}
    string interpret() {
        string tmpDir;
        if (dir == "xiangqian") {
            tmpDir = "down";
        } else if (dir == "xianghou") {
            tmpDir = "up";
        } else if (dir == "xiangshang") {
            tmpDir = "left";
        } else if (dir == "xiangxia") {
            tmpDir = "right";
        } else {
            tmpDir = "invalid action cmd";
        }
        return tmpDir;
    }

private:
    string dir;
};

class ActionNode : public AbstractNode {
public:
    ActionNode() {}
    ActionNode(string ra):act(ra) {}
    string interpret() {
        string tmpAct;
        if (act == "yidong") {
            tmpAct = "move";
        } else if (act == "paodong") {
            tmpAct = "run";
        } else {
            tmpAct = "invalid action cmd";
        }
        return tmpAct;
    }

private:
    string act;
};

class DistanceNode : public AbstractNode {
public:
    DistanceNode() {}
    DistanceNode(string rd):distance(rd) {}

    string interpret() {
        return distance;
    }
private:
    string distance;
};

class InstructionHandler {
public:
    InstructionHandler() {
        pTree = NULL;
    }
    InstructionHandler(string ri):instruction(ri) {}
    ~InstructionHandler() {
        if (pTree != NULL) {
            delete pTree;
        }
    }
    void handle() {
        AbstractNode* pleft = NULL;
        AbstractNode* pright = NULL;
        AbstractNode* pdir = NULL;
        AbstractNode* pact = NULL;
        AbstractNode* pdis = NULL;
        vector<string> tmpIns;

        splitString(instruction, tmpIns, " ");
        for(vector<string>::size_type i = 0; i != tmpIns.size(); i++) {
            if (tmpIns[i] == "he") {
                pdir = new DirectionNode(tmpIns[++i]);
                pact = new ActionNode(tmpIns[++i]);
                pdis = new DistanceNode(tmpIns[++i]);
                pright = new SentenceNode(pdir, pact, pdis);
            } else {
                pdir = new DirectionNode(tmpIns[i]);
                pact = new ActionNode(tmpIns[++i]);
                pdis = new DistanceNode(tmpIns[++i]);
                pleft = new SentenceNode(pdir, pact, pdis);
            }
        }
        this->pTree = new AndNode(pleft, pright);
    }
    void output() {
        cout << "original instruction: "<< endl;
        cout << instruction << endl;
        cout << this->pTree->interpret() << endl;
    }

private:
    void splitString(const string& s, vector<string>& v, const string& c) {
        string::size_type pos1, pos2;
        pos2 = s.find(c);
        pos1 = 0;
        while(string::npos != pos2) {
            v.push_back(s.substr(pos1, pos2-pos1));
            pos1 = pos2 + c.size();
            pos2 = s.find(c, pos1);
        }
        if(pos1 != s.length())
            v.push_back(s.substr(pos1));
    }

    string instruction;
    AbstractNode* pTree;
};

#endif
