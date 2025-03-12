#include <iostream>
#include "flyweight.h"

using namespace std;

void PieceBoard::setPiece(PieceColor rpc, PiecePosition rpp) {
    if (rpc == COLOR_BLACK) {
        if (bp == NULL) {
            bp = new BlackPiece(rpc);
        }
        cout << blackName << " in (" << rpp.x << ", " << rpp.y << ") ";
        bp->draw();
        bppv.push_back(rpp);
    } else {
        if (wp == NULL) {
            wp = new WhitePiece(rpc);
        }
        cout << whiteName << " in (" << rpp.x << ", " << rpp.y << ") ";
        wp->draw();
        wppv.push_back(rpp);
    }
   

}


