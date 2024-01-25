#include "ScreenPartida.h"
#include<SFML/Graphics.hpp>

clsScreenPartida::clsScreenPartida(RenderWindow *w, clsPartida *p) : clsScreen(w){
    piezas[0] = new clsPeon(100,100,'n');
    piezas[0]->setSprite("./Images/Sprites/peon_alt.png");
    partida = p;
}

void clsScreenPartida::draw(){
    window->draw(*sprites[0]);
    window->draw(piezas[0]->getSprite());
    // window->draw(partida->getSprite(6,1));
}