#include "Peon.h"

clsPeon::clsPeon(Vector2f pos, char c) : clsPieza(pos,c){
    firstMovement = true;
}
bool clsPeon::testMovement(Vector2f){
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
    return false;
}