#include "Reina.h"

clsReina::clsReina(Vector2f pos, char c) : clsPieza(pos,c){
}

bool clsReina::testMovement(Vector2f pos, bool matriz[][8],bool* turno){
    if(pos == posOrigin){
        return true;
    }
    
    int inicio = posOrigin.y/_CASILLA;
    int final = (pos.y/_CASILLA)-1;

    if(pos.x == posOrigin.x){
        if(inicio > final){
            for(int i = inicio-2; i > final; i--){
                if(matriz[int(posOrigin.x/_CASILLA)-1][i] == true){
                    return false;
                }
            }   
        }
        else{
            for(int i = inicio; i <= final; i++){
                if(matriz[int(posOrigin.x/_CASILLA)-1][i] == true){
                    return false;
                }
            }           
        }
        *turno = !*turno;
        return true;
    }
    inicio = posOrigin.x/_CASILLA;
    final = (pos.x/_CASILLA)-1;

    if(pos.y == posOrigin.y){
        if(inicio > final){
            for(int i = inicio-2; i > final; i--){
                if(matriz[i][int(posOrigin.y/_CASILLA)-1] == true){
                    return false;
                }
            } 
        }
        else{
            for(int i = inicio; i <= final; i++){
                if(matriz[i][int(posOrigin.y/_CASILLA)-1] == true){
                    return false;
                }
            } 
        }
        *turno = !*turno;
        return true;
    }

    
    Vector2f posibility;
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