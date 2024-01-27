#include "Torre.h"

clsTorre::clsTorre(Vector2f pos, char c) : clsPieza(pos,c){
}

bool clsTorre::testMovement(Vector2f pos){
    if(pos.x == posOrigin.x || pos.y == posOrigin.y){
        return true;
    }
    return false;
}