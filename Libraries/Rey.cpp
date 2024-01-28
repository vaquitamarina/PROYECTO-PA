#include "Rey.h"


clsRey::clsRey(Vector2f pos, char c) : clsPieza(pos,c){
}

bool clsRey::testMovement(Vector2f pos, bool matriz[][8],bool* turno){
    if(pos == posOrigin){
        return true;
    }
    if(pos.x == posOrigin.x + _CASILLA || pos.y == posOrigin.y + _CASILLA || pos.x == posOrigin.x - _CASILLA || pos.y == posOrigin.y - _CASILLA){
        *turno = !*turno;
        return true;
    }
    return false;
}