#include "Rey.h"


clsRey::clsRey(Vector2f pos, char c) : clsPieza(pos,c){
}

bool clsRey::testMovement(Vector2f pos){
    if(pos.x == posOrigin.x + _CASILLA || pos.y == posOrigin.y + _CASILLA || pos.x == posOrigin.x - _CASILLA || pos.y == posOrigin.y - _CASILLA){
        return true;
    }
    return false;
}