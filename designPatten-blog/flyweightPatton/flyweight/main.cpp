#include <iostream>
#include "flyweight.h"

using namespace std;

int main(void) {
    PieceBoard pb("ycao", "miao");

    pb.setPiece(COLOR_BLACK, PiecePosition(4, 4));
    pb.setPiece(COLOR_WHITE, PiecePosition(4, 16));
    pb.setPiece(COLOR_BLACK, PiecePosition(16, 4));    
    pb.setPiece(COLOR_WHITE, PiecePosition(16, 16));    
    return 0;
}
