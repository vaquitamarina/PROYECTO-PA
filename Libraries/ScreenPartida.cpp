#include "ScreenPartida.h"
#include<SFML/Graphics.hpp>

clsScreenPartida::clsScreenPartida(RenderWindow *w, clsPartida *p) : clsScreen(w){
    partida = p;
}

void clsScreenPartida::draw(){
    window->draw(*sprites[0]);
    // window->draw(partida->getSprite(1,1));
    // window->draw(partida->getSprite(6,1));
}