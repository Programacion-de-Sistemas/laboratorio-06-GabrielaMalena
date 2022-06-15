#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = join(whiteSquare,blackSquare);
  char** blackKnightx = repeatH(blackKnight,4);
  interpreter(blackKnightx);
  
}
