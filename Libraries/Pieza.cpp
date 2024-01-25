#include "Pieza.h"
using namespace std;

// Metodos de la clase Pieza

clsPieza::clsPieza(Vector2f pos, char c){
    // posX = x;
    // posY = y;
    sprite.setPosition(pos);
    color = c;
}
    
// void clsPieza::setPosX(int pos){
//     posX = pos;
//     sprite.setPosition({pos,posY});
// }
// void clsPieza::setPosY(int pos){
//     posY = pos;
//     sprite.setPosition({posX,pos});
// }
void clsPieza::setPos(Vector2f pos){
    sprite.setPosition(pos);
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
    sprite.setScale({3,3});
    
}

Sprite clsPieza::getSprite(){
    return sprite;
}
    