#include "Pieza.h"
using namespace std;

// Metodos de la clase Pieza

clsPieza::clsPieza(int x, int y, char c){
    posX = x;
    posY = y;
    color = c;
}

void clsPieza::setPos(Vector2f p){
    sprite.setPosition(p);
}

void clsPieza::setSprite(string d){
    Image image;
    image.loadFromFile(d);
    texture.loadFromImage(image);
    sprite.setTexture(texture); 
}

    