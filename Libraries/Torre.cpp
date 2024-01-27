#include "Torre.h"

clsTorre::clsTorre(Vector2f pos, char c) : clsPieza(pos,c){
}

bool clsTorre::testMovement(Vector2f pos, bool matriz[][8]){

    // if(pos.x == posOrigin.x || pos.y == posOrigin.y){
    //     for(int i = 0; i < 8; i ++){

    //     }
    // }
    if(pos == posOrigin){
        return true;
    }
    if(pos.x == posOrigin.x){
        for(int i = posOrigin.y/_CASILLA; i <= pos.y/_CASILLA; i = i + _CASILLA){
            if(matriz[int(posOrigin.x/_CASILLA)][i] == true){
                return false;
            }
        }
        return true;
    }

    if(pos.y == posOrigin.y){
        for(int i = posOrigin.x/_CASILLA; i <= pos.x/_CASILLA; i = i + _CASILLA){
            if(matriz[i][int(posOrigin.y/_CASILLA)] == true){
                return false;
            }
        }
        return true;
    }
    return false;
}