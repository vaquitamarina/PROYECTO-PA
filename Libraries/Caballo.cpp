#include "Caballo.h"

clsCaballo::clsCaballo(Vector2f pos, char c) : clsPieza(pos,c){
    
}

bool clsCaballo::testMovement(Vector2f pos, bool matriz[][8]){
    if(pos.x == posOrigin.x + _CASILLA && pos.y == posOrigin.y + (2 * _CASILLA)){
        return true;
    }
    if(pos.x == posOrigin.x - _CASILLA && pos.y == posOrigin.y - (2 * _CASILLA)){
        return true;
    }
    if(pos.x == posOrigin.x + _CASILLA && pos.y == posOrigin.y - (2 * _CASILLA)){
        return true;
    }
    if(pos.x == posOrigin.x - _CASILLA && pos.y == posOrigin.y + (2 * _CASILLA)){
        return true;
    }
    if(pos.x == posOrigin.x + (2 * _CASILLA) && pos.y == posOrigin.y + _CASILLA){
        return true;
    }
    if(pos.x == posOrigin.x - (2 * _CASILLA) && pos.y == posOrigin.y - _CASILLA){
        return true;
    }
    if(pos.x == posOrigin.x + (2 * _CASILLA) && pos.y == posOrigin.y - _CASILLA){
        return true;
    }
    if(pos.x == posOrigin.x - (2 * _CASILLA) && pos.y == posOrigin.y + _CASILLA){
        return true;
    }
    return false;
}