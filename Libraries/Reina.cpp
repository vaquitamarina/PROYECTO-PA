#include "Reina.h"

clsReina::clsReina(Vector2f pos, char c) : clsPieza(pos,c){
}

bool clsReina::testMovement(Vector2f pos, bool matriz[][8]){
    if(pos.x == posOrigin.x || pos.y == posOrigin.y){
        return true;
    }
    Vector2f posibility;
    for(int i = 0; i < 7; i ++){
        posibility = {posOrigin.x + i*_CASILLA,posOrigin.y + i*_CASILLA};
        if(pos == posibility){
            return true;
        }
        posibility = {posOrigin.x + i*_CASILLA,posOrigin.y - i*_CASILLA};
        if(pos == posibility){
            return true;
        }
        posibility = {posOrigin.x - i*_CASILLA,posOrigin.y + i*_CASILLA};
        if(pos == posibility){
            return true;
        }
        posibility = {posOrigin.x - i*_CASILLA,posOrigin.y - i*_CASILLA};
        if(pos == posibility){
            return true;
        }
    }

    return false;
}