#include <iostream>
#include "flyweight.h"

using namespace std;

void PieceBoard::setPiece(PieceColor rpc, PiecePosition rpp) {
    Piece* p = NULL;
    if (rpc == COLOR_BLACK) {
        p = new BlackPiece(rpc, rpp);
        cout << blackName << " in (" << rpp.x << ", " << rpp.y << ") ";
        p->draw();
    } else {
        p = new WhitePiece(rpc, rpp);
        cout << whiteName << " in (" << rpp.x << ", " << rpp.y << ") ";
        p->draw();
    }
    pv.push_back(p);
}

void PieceBoard::clear() {
    int size = pv.size();
    for (int i = 0; i < size; i ++) {
        delete pv[i];
    }
}


