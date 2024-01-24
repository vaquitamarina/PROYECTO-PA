#include "Peon.h"

clsPeon::clsPeon(int x, int y, char c) : clsPieza(x,y,c){
    firstMovement = true;
}
bool clsPeon::testMovement(int x,int y){
    if(x == posX){
        if(color = 'b'){
            if(y == posY + 1){
                return true;
            }
            if(firstMovement && x == posY + 2){
                return true;
            }    
        }
        if(color = 'n'){
            if(y == posY - 1){
                return true;
            }
            if(firstMovement && x == posY - 2){
                return true;
            }    
        }
        
    }
    return false;
}