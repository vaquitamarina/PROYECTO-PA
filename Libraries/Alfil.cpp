#include "Alfil.h"

clsAlfil::clsAlfil(Vector2f pos, char c) : clsPieza(pos,c){
    
}

bool clsAlfil::testMovement(Vector2f pos, bool matriz[][8],bool* turno){
    Vector2f posibility;
    if(pos == posOrigin){
        return true;
    }
    for(int i = 0; i < 8; i ++){
        posibility = {posOrigin.x + i*_CASILLA,posOrigin.y + i*_CASILLA};
        if(pos == posibility){
            for(int i = 1; i < int(pos.y/_CASILLA) - int(posOrigin.y/_CASILLA); i++){
                if(matriz[int(posOrigin.x/_CASILLA) + i - 1][int(posOrigin.y/_CASILLA) + i - 1] == true){
                    return false;
                }
            }
            *turno = !*turno;
            return true;
        }
        posibility = {posOrigin.x + i*_CASILLA,posOrigin.y - i*_CASILLA};
        if(pos == posibility){
        
            for(int i = 1; i < int(posOrigin.y/_CASILLA) - int(pos.y/_CASILLA); i++){
                if(matriz[int(posOrigin.x/_CASILLA) + i - 1][int(posOrigin.y/_CASILLA) - i - 1] == true){
                    return false;
                }
            }
            *turno = !*turno;
            return true;
        }
        posibility = {posOrigin.x - i*_CASILLA,posOrigin.y + i*_CASILLA};
        if(pos == posibility){
            for(int i = 1; i < int(pos.y/_CASILLA) - int(posOrigin.y/_CASILLA); i++){
                if(matriz[int(posOrigin.x/_CASILLA) - i - 1][int(posOrigin.y/_CASILLA) + i - 1] == true){
                    return false;
                }
            }
            *turno = !*turno;
            return true;
        }
        posibility = {posOrigin.x - i*_CASILLA,posOrigin.y - i*_CASILLA};
        if(pos == posibility){
            for(int i = 1; i < int(posOrigin.y/_CASILLA) - int(pos.y/_CASILLA); i++){
                if(matriz[int(posOrigin.x/_CASILLA) - i - 1][int(posOrigin.y/_CASILLA) - i - 1] == true){
                    return false;
                }
            }
            *turno = !*turno;
            return true;
        }
    }
    return false;
}

