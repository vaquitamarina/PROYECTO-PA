#include "Pieza.h"
using namespace std;

// Metodos de la clase Pieza

clsPieza::clsPieza(int x, int y, char c){
    posX = x;
    posY = y;
    sprite.setPosition({x,y});
    color = c;
}
    
void clsPieza::setPosX(int pos){
    posX = pos;
    sprite.setPosition({pos,posY});
}
void clsPieza::setPosY(int pos){
    posY = pos;
    sprite.setPosition({posX,pos});
}
int clsPieza::getPosX(){
    return posX;
}
int clsPieza::getPosY(){
    return posY;
}


void clsPieza::setSprite(string d){
    Image image;
    image.loadFromFile(d);
    texture.loadFromImage(image);
    sprite.setTexture(texture);
    sprite.setPosition({posX,posY});
    
}

Sprite clsPieza::getSprite(){
    return sprite;
}
    