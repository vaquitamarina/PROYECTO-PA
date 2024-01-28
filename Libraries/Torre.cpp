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

    int inicio = posOrigin.y/_CASILLA;
    int final = (pos.y/_CASILLA)-1;
    cout<<"Inicio : "<< inicio<<endl;
    cout<<"Final: "<<final<<endl;

    if(pos.x == posOrigin.x){
        if(inicio > final){
            for(int i = inicio-2; i > final; i--){
                if(matriz[int(posOrigin.x/_CASILLA)-1][i] == true){
                    cout<<int(posOrigin.x/_CASILLA)-1<<","<<i;
                    return false;
                }
            }   
        }
        else{
            for(int i = inicio; i <= final; i++){
                if(matriz[int(posOrigin.x/_CASILLA)-1][i] == true){
                    cout<<int(posOrigin.x/_CASILLA)-1<<","<<i;
                    return false;
                }
            }           
        }
        
        return true;
    }
    inicio = posOrigin.x/_CASILLA;
    final = (pos.x/_CASILLA)-1;

    cout<<"Inicio2 : "<< inicio<<endl;
    cout<<"Final2: "<<final<<endl;
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
        
        return true;
    }
    return false;
}