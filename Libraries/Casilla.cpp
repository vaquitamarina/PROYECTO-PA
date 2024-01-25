#include "Casilla.h"

clsCasilla::clsCasilla(int x,int y){
    vacio = true;
    posX = x;
    posY = y;
}
clsCasilla::clsCasilla(){
}

Sprite clsCasilla::getSprite(){
    return pPieza->getSprite();
}
void clsCasilla::setPieza(clsPieza *p){
    pPieza = p;
    // pPieza->setPosX(posX);
    // pPieza->setPosY(posY);

    vacio = false;
}

void clsCasilla::setVacio(bool v){
    vacio = v;
}