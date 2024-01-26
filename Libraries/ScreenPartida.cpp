#include "ScreenPartida.h"
#include<SFML/Graphics.hpp>

clsScreenPartida::clsScreenPartida(RenderWindow *w, clsPartida *p) : clsScreen(w){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            casillas[i][j].x = (_CASILLAORIGEN - 1) + (i * _CASILLA);
            casillas[i][j].y = (_CASILLAORIGEN + 4) + (j * _CASILLA);

        }
    }
    piezas[0] = new clsPeon(casillas[0][1],'n');
    piezas[0]->setSprite("./Images/Sprites/peon_alt.png");
    piezas[1] = new clsPeon(casillas[1][1],'n');
    piezas[1]->setSprite("./Images/Sprites/peon_alt.png");
    piezas[2] = new clsPeon(casillas[2][1],'n');
    piezas[2]->setSprite("./Images/Sprites/peon_alt.png");
    piezas[3] = new clsPeon(casillas[3][1],'n');
    piezas[3]->setSprite("./Images/Sprites/peon_alt.png");
    piezas[4] = new clsPeon(casillas[4][1],'n');
    piezas[4]->setSprite("./Images/Sprites/peon_alt.png");
    piezas[5] = new clsPeon(casillas[5][1],'n');
    piezas[5]->setSprite("./Images/Sprites/peon_alt.png");
    piezas[6] = new clsPeon(casillas[6][1],'n');
    piezas[6]->setSprite("./Images/Sprites/peon_alt.png");
    piezas[7] = new clsPeon(casillas[7][1],'n');
    piezas[7]->setSprite("./Images/Sprites/peon_alt.png");

    piezas[8] = new clsPeon(casillas[0][6],'b');
    piezas[8]->setSprite("./Images/Sprites/peon.png");
    piezas[9] = new clsPeon(casillas[1][6],'b');
    piezas[9]->setSprite("./Images/Sprites/peon.png");
    piezas[10] = new clsPeon(casillas[2][6],'b');
    piezas[10]->setSprite("./Images/Sprites/peon.png");
    piezas[11] = new clsPeon(casillas[3][6],'b');
    piezas[11]->setSprite("./Images/Sprites/peon.png");
    piezas[12] = new clsPeon(casillas[4][6],'b');
    piezas[12]->setSprite("./Images/Sprites/peon.png");
    piezas[13] = new clsPeon(casillas[5][6],'b');
    piezas[13]->setSprite("./Images/Sprites/peon.png");
    piezas[14] = new clsPeon(casillas[6][6],'b');
    piezas[14]->setSprite("./Images/Sprites/peon.png");
    piezas[15] = new clsPeon(casillas[7][6],'b');
    piezas[15]->setSprite("./Images/Sprites/peon.png");

    // partida = p;
    // partida->setPiezas(piezas[0]);
}

void clsScreenPartida::draw(){
    window->draw(*sprites[0]);
    window->draw(piezas[0]->getSprite());
    window->draw(piezas[1]->getSprite());
    window->draw(piezas[2]->getSprite());
    window->draw(piezas[3]->getSprite());
    window->draw(piezas[4]->getSprite());
    window->draw(piezas[5]->getSprite());
    window->draw(piezas[6]->getSprite());
    window->draw(piezas[7]->getSprite());
    window->draw(piezas[8]->getSprite());
    window->draw(piezas[9]->getSprite());
    window->draw(piezas[10]->getSprite());
    window->draw(piezas[11]->getSprite());
    window->draw(piezas[12]->getSprite());
    window->draw(piezas[13]->getSprite());
    window->draw(piezas[14]->getSprite());
    window->draw(piezas[15]->getSprite());
    // window->draw(partida->getSprite(6,1));
}