#include "ScreenPartida.h"
#include<SFML/Graphics.hpp>

clsScreenPartida::clsScreenPartida(RenderWindow *w, clsPartida *p) : clsScreen(w){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            casillas[i][j].x = _CASILLAORIGEN + i * _CASILLA;
            casillas[i][j].y = _CASILLAORIGEN + j * _CASILLA;
        }
    }
    piezas[0] = new clsPeon(casillas[0][0],'n');
    piezas[0]->setSprite("./Images/Sprites/peon_alt.png");
    piezas[1] = new clsPeon(casillas[1][0],'b');
    piezas[1]->setSprite("./Images/Sprites/peon.png");
    // partida = p;
    // partida->setPiezas(piezas[0]);
}

void clsScreenPartida::draw(){
    window->draw(*sprites[0]);
    window->draw(piezas[0]->getSprite());
    window->draw(piezas[1]->getSprite());
    // window->draw(partida->getSprite(6,1));
}