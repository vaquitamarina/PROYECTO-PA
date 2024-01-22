#include "Casilla.h"

clsCasilla::clsCasilla(){
    vacio = true;
}

string clsCasilla::getFigura(bool f){
    if(!vacio){
        return pPieza->getFigura();
    }
    if(f){
        return "/";
    }
    return " ";
}
void clsCasilla::setPieza(clsPieza *p){
    pPieza = p;
    vacio = false;
}

void clsCasilla::setVacio(bool v){
    vacio = v;
}