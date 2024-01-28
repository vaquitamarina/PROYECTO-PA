#include "Peon.h"

clsPeon::clsPeon(Vector2f pos, char c) : clsPieza(pos,c){
    firstMovement = true;
}
bool clsPeon::testMovement(Vector2f pos, bool matriz[][8],bool* turno){
    if(pos == posOrigin){
        return true;
    }

    if (pos.x == posOrigin.x){
        if(color == 'b'){
            if(pos.y == posOrigin.y - _CASILLA){
                firstMovement = false;
                *turno = !*turno;
                return true;
            }
            if(firstMovement && pos.y == posOrigin.y - (2 * _CASILLA)){ 
                firstMovement = false;
                *turno = !*turno;
                return true;
            }
        }
        if(color == 'n'){
            if(pos.y == posOrigin.y + _CASILLA){
                firstMovement = false;
                *turno = !*turno;
                return true;
            }
            if(firstMovement && pos.y == posOrigin.y + (2 * _CASILLA)){ 
                firstMovement = false;
                *turno = !*turno;
                return true;
            }
        }
    }
    return false;
}