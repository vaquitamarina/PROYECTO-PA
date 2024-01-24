#include "Pieza.h"
using namespace std;

// Metodos de la clase Pieza

clsPieza::clsPieza(int x, int y, char c){
    posX = x;
    posY = y;
    color = c;
}

void clsPieza::setPosX(int x){
    posX = x;
}
void clsPieza::setPosY(int y){
    posY = y;
}

void clsPieza::setSprite(string d){
    Image image;
    image.loadFromFile(d);
    texture.loadFromImage(image);
    sprite.setTexture(texture);
}

    