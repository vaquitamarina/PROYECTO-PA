#include "Peon.h"

clsPeon::clsPeon(Vector2f pos, char c) : clsPieza(pos,c){
    firstMovement = true;
}
bool clsPeon::testMovement(Vector2f pos, bool matriz[][8]){
    // if(x == posX){
    //     if(color = 'b'){
    //         if(y == posY + 1){
    //             return true;
    //         }
    //         if(firstMovement && x == posY + 2){
    //             return true;
    //         }    
    //     }
    //     if(color = 'n'){
    //         if(y == posY - 1){
    //             return true;
    //         }
    //         if(firstMovement && x == posY - 2){
    //             return true;
    //         }    
    //     }
        
    // }
    if (pos.x == posOrigin.x){
        if(color == 'b'){
            if(pos.y == posOrigin.y - _CASILLA){
                firstMovement = false;
                return true;
            }
            if(firstMovement && pos.y == posOrigin.y - (2 * _CASILLA)){ 
                firstMovement = false;
                return true;
            }
        }
        if(color == 'n'){
            if(pos.y == posOrigin.y + _CASILLA){
                firstMovement = false;
                return true;
            }
            if(firstMovement && pos.y == posOrigin.y + (2 * _CASILLA)){ 
                firstMovement = false;
                return true;
            }
        }
    }
    return false;
}