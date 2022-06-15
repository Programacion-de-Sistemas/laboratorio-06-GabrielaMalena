#ifndef TABLERO_H
#define TABLERO_H

#include "Pieza.h"
class Tablero
{
public:
    Tablero();

    //Casillas del tablero
    void DibujarCasillas(int x, int y);

    //Piezas tablero
    void FichaNegras();
    void FichaBlancas();

    //Añadimos fichas
    void addPieza();
    void reset();
private:

    //piezas negras y piezas blancas
    List <Pieza *> white;
    List <Pieza *> black;



};
#endif // TABLERO_H
