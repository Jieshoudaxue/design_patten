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

    int x;
    int y;

};

class Piece {
public:
    Piece() {}
    Piece(PieceColor rpc, PiecePosition rpp): pc(rpc), pp(rpp) {}
    virtual ~Piece() {}
    
    virtual void draw() {};
    
protected:
    PieceColor pc;
    PiecePosition pp;
};

class BlackPiece : public Piece {
public:
    BlackPiece() {}
    BlackPiece(PieceColor rpc, PiecePosition rpp):Piece(rpc, rpp) {}

    void draw() {
        cout << "put a black piece" << endl;
    }
    
};

class WhitePiece : public Piece {
public:
    WhitePiece() {}
    WhitePiece(PieceColor rpc, PiecePosition rpp):Piece(rpc, rpp) {}

    void draw() {
        cout << "put a white piece" << endl;
    }
    
};

class PieceBoard {
public:
    PieceBoard() {}
    PieceBoard(string black, string white):blackName(black), whiteName(white) {}
    ~PieceBoard() {
        clear();
    }

    void setPiece(PieceColor rpc, PiecePosition rpp);
    void clear();
    

private:
    string blackName;
    string whiteName;
    vector<Piece*> pv;
};


#endif
