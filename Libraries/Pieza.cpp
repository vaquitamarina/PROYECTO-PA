#include "Pieza.h"
using namespace std;

// Metodos de la clase Pieza

clsPieza::clsPieza(int x, int y, char c,string f){
    posX = x;
    posY = y;
    color = c;
    figura = f;
}

void clsPieza::setPosX(int x){
    posX = x;
}
void clsPieza::setPosY(int y){
    posY = y;
}

string clsPieza::getFigura(){
    return figura;
}

    