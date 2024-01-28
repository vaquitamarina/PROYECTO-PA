#include "Reina.h"

clsReina::clsReina(Vector2f pos, char c) : clsPieza(pos,c){
}

bool clsReina::testMovement(Vector2f pos, bool matriz[][8],bool* turno){
    if(pos == posOrigin){
        return true;
    }
    if(pos.x == posOrigin.x || pos.y == posOrigin.y){
        *turno = !*turno;
        return true;
    }
    Vector2f posibility;
    for(int i = 0; i < 7; i ++){
        posibility = {posOrigin.x + i*_CASILLA,posOrigin.y + i*_CASILLA};
        if(pos == posibility){
            *turno = !*turno;
            return true;
        }
        posibility = {posOrigin.x + i*_CASILLA,posOrigin.y - i*_CASILLA};
        if(pos == posibility){
            *turno = !*turno;
            return true;
        }
        posibility = {posOrigin.x - i*_CASILLA,posOrigin.y + i*_CASILLA};
        if(pos == posibility){
            *turno = !*turno;
            return true;
        }
        posibility = {posOrigin.x - i*_CASILLA,posOrigin.y - i*_CASILLA};
        if(pos == posibility){
            *turno = !*turno;
            return true;
        }
    }

    return false;
}