#ifndef _FLYWEIGHT_H_
#define _FLYWEIGHT_H_

#include <string>
#include <iostream>
#include <vector>
using namespace std;

enum PieceColor {COLOR_BLACK, COLOR_WHITE};

class PiecePosition {
public:
    PiecePosition() {}
    PiecePosition(int rx, int ry):x(rx), y(ry) {}
    ~PiecePosition() {}

    int x;
    int y;

};

class Piece {
public:
    Piece() {}
    Piece(PieceColor rpc): pc(rpc) {}
    virtual ~Piece() {}
    
    virtual void draw() {};
    
protected:
    PieceColor pc;
};

class BlackPiece : public Piece {
public:
    BlackPiece() {}
    BlackPiece(PieceColor rpc):Piece(rpc) {}
    ~BlackPiece() {}

    void draw() {
        cout << "put a black piece" << endl;
    }
    
};

class WhitePiece : public Piece {
public:
    WhitePiece() {}
    WhitePiece(PieceColor rpc):Piece(rpc) {}
    ~WhitePiece() {}

    void draw() {
        cout << "put a white piece" << endl;
    }
    
};

//享元模式对对象的管理比较复杂，通常与工厂模式配合使用，即定义一个工厂类用于生产对象；
//这里的PieceBoard类就相当于工厂类，其生产棋子，而且这里用的是简单工厂模式；
//更好的情况下，享元模式还应该与单例模式配合，即将工厂类设计成单例类，保障唯一性。
class PieceBoard {
public:
    PieceBoard() {
        bp = NULL;
        wp = NULL;
    }
    PieceBoard(string black, string white):blackName(black), whiteName(white), bp(NULL), wp(NULL) {}
    ~PieceBoard() {
        delete bp;
        delete wp;
    }

    void setPiece(PieceColor rpc, PiecePosition rpp);    

private:
    string blackName;
    string whiteName;
    Piece* bp;
    Piece* wp;
    //博客中代码只有一个vector，无法区分黑色和白色，造成系统不可用，评论中证实了这点！
    //一个简单的办法是用两个vector分别存储黑色和白色棋子！
    vector<PiecePosition> bppv;
    vector<PiecePosition> wppv;
};


#endif
