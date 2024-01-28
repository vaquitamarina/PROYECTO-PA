#include "Caballo.h"

clsCaballo::clsCaballo(Vector2f pos, char c) : clsPieza(pos,c){
    
}

bool clsCaballo::testMovement(Vector2f pos, bool matriz[][8],bool* turno){
    if(pos == posOrigin){
        return true;
    }
    if(pos.x == posOrigin.x + _CASILLA && pos.y == posOrigin.y + (2 * _CASILLA)){
        *turno = !*turno;
        return true;
    }
    if(pos.x == posOrigin.x - _CASILLA && pos.y == posOrigin.y - (2 * _CASILLA)){
        *turno = !*turno;
        return true;
    }
    if(pos.x == posOrigin.x + _CASILLA && pos.y == posOrigin.y - (2 * _CASILLA)){
        *turno = !*turno;
        return true;
    }
    if(pos.x == posOrigin.x - _CASILLA && pos.y == posOrigin.y + (2 * _CASILLA)){
        *turno = !*turno;
        return true;
    }
    if(pos.x == posOrigin.x + (2 * _CASILLA) && pos.y == posOrigin.y + _CASILLA){
        *turno = !*turno;
        return true;
    }
    if(pos.x == posOrigin.x - (2 * _CASILLA) && pos.y == posOrigin.y - _CASILLA){
        *turno = !*turno;
        return true;
    }
    if(pos.x == posOrigin.x + (2 * _CASILLA) && pos.y == posOrigin.y - _CASILLA){
        *turno = !*turno;
        return true;
    }
    if(pos.x == posOrigin.x - (2 * _CASILLA) && pos.y == posOrigin.y + _CASILLA){
        *turno = !*turno;
        return true;
    }
    return false;
}