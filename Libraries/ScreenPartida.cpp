#include "ScreenPartida.h"
#include<SFML/Graphics.hpp>

clsScreenPartida::clsScreenPartida(RenderWindow *w, clsPartida *p) : clsScreen(w){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            casillas[i][j].x = (_CASILLAORIGEN - 1) + (i * _CASILLA);
            casillas[i][j].y = (_CASILLAORIGEN + 4) + (j * _CASILLA);

        }
    }
    this->setSprite(1,"./Images/Pointers/02.png");
    this->setPosSprite(1,{casillas[0][0].x /*- _PUNTERODIF*/,casillas[0][0].y});
    piezas[0] = new clsPeon(casillas[0][1],'n');
    piezas[0]->setSprite("./Images/Sprites/peon2.png");
    piezas[1] = new clsPeon(casillas[1][1],'n');
    piezas[1]->setSprite("./Images/Sprites/peon2.png");
    piezas[2] = new clsPeon(casillas[2][1],'n');
    piezas[2]->setSprite("./Images/Sprites/peon2.png");
    piezas[3] = new clsPeon(casillas[3][1],'n');
    piezas[3]->setSprite("./Images/Sprites/peon2.png");
    piezas[4] = new clsPeon(casillas[4][1],'n');
    piezas[4]->setSprite("./Images/Sprites/peon2.png");
    piezas[5] = new clsPeon(casillas[5][1],'n');
    piezas[5]->setSprite("./Images/Sprites/peon2.png");
    piezas[6] = new clsPeon(casillas[6][1],'n');
    piezas[6]->setSprite("./Images/Sprites/peon2.png");
    piezas[7] = new clsPeon(casillas[7][1],'n');
    piezas[7]->setSprite("./Images/Sprites/peon2.png");

    piezas[8] = new clsPeon(casillas[0][6],'b');
    piezas[8]->setSprite("./Images/Sprites/peon1.png");
    piezas[9] = new clsPeon(casillas[1][6],'b');
    piezas[9]->setSprite("./Images/Sprites/peon1.png");
    piezas[10] = new clsPeon(casillas[2][6],'b');
    piezas[10]->setSprite("./Images/Sprites/peon1.png");
    piezas[11] = new clsPeon(casillas[3][6],'b');
    piezas[11]->setSprite("./Images/Sprites/peon1.png");
    piezas[12] = new clsPeon(casillas[4][6],'b');
    piezas[12]->setSprite("./Images/Sprites/peon1.png");
    piezas[13] = new clsPeon(casillas[5][6],'b');
    piezas[13]->setSprite("./Images/Sprites/peon1.png");
    piezas[14] = new clsPeon(casillas[6][6],'b');
    piezas[14]->setSprite("./Images/Sprites/peon1.png");
    piezas[15] = new clsPeon(casillas[7][6],'b');
    piezas[15]->setSprite("./Images/Sprites/peon1.png");

    piezas[16] = new clsTorre(casillas[0][0],'n');
    piezas[16]->setSprite("./Images/Sprites/torre2.png");
    piezas[17] = new clsTorre(casillas[7][0],'n');
    piezas[17]->setSprite("./Images/Sprites/torre2.png");
    piezas[18] = new clsTorre(casillas[0][7],'b');
    piezas[18]->setSprite("./Images/Sprites/torre1.png");
    piezas[19] = new clsTorre(casillas[7][7],'b');
    piezas[19]->setSprite("./Images/Sprites/torre1.png");
    
    piezas[20] = new clsCaballo(casillas[1][0],'n');
    piezas[20]->setSprite("./Images/Sprites/caballo2.png");
    piezas[21] = new clsCaballo(casillas[6][0],'n');
    piezas[21]->setSprite("./Images/Sprites/caballo2.png");
    piezas[22] = new clsCaballo(casillas[1][7],'b');
    piezas[22]->setSprite("./Images/Sprites/caballo1.png");
    piezas[23] = new clsCaballo(casillas[6][7],'b');
    piezas[23]->setSprite("./Images/Sprites/caballo1.png");  
    
    piezas[24] = new clsAlfil(casillas[2][0],'n');
    piezas[24]->setSprite("./Images/Sprites/alfil2.png");
    piezas[25] = new clsAlfil(casillas[5][0],'n');
    piezas[25]->setSprite("./Images/Sprites/alfil2.png");
    piezas[26] = new clsAlfil(casillas[2][7],'b');
    piezas[26]->setSprite("./Images/Sprites/alfil1.png");
    piezas[27] = new clsAlfil(casillas[5][7],'b');
    piezas[27]->setSprite("./Images/Sprites/alfil1.png");

    piezas[28] = new clsReina(casillas[3][0],'n');
    piezas[28]->setSprite("./Images/Sprites/reina2.png");
    piezas[29] = new clsReina(casillas[3][7],'b');
    piezas[29]->setSprite("./Images/Sprites/reina1.png");

    piezas[30] = new clsRey(casillas[4][0],'n');
    piezas[30]->setSprite("./Images/Sprites/rey2.png");
    piezas[31] = new clsRey(casillas[4][7],'b');
    piezas[31]->setSprite("./Images/Sprites/rey1.png");
    // partida = p;
    // partida->setPiezas(piezas[0]);
    priority = 31;
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
    window->draw(piezas[16]->getSprite());
    window->draw(piezas[17]->getSprite());
    window->draw(piezas[18]->getSprite());
    window->draw(piezas[19]->getSprite());
    window->draw(piezas[20]->getSprite());
    window->draw(piezas[21]->getSprite());
    window->draw(piezas[22]->getSprite());
    window->draw(piezas[23]->getSprite());
    window->draw(piezas[24]->getSprite());
    window->draw(piezas[25]->getSprite());
    window->draw(piezas[26]->getSprite());
    window->draw(piezas[27]->getSprite());
    window->draw(piezas[28]->getSprite());
    window->draw(piezas[29]->getSprite());
    window->draw(piezas[30]->getSprite());
    window->draw(piezas[31]->getSprite());
    window->draw(piezas[priority]->getSprite());
    window->draw(*sprites[1]);


    // window->draw(partida->getSprite(6,1));
}

void clsScreenPartida::setPointerPos(int selected, char axis){  
    if(axis == 'x'){
        this->setPosSprite(1,{casillas[selected][0].x /*- _PUNTERODIF*/,this->getPosSprite(1).y});    
    }
    if(axis == 'y'){
        this->setPosSprite(1,{this->getPosSprite(1).x, casillas[0][selected].y});  
    }
}

int clsScreenPartida::getCasillaPieza(Vector2f pos){
    for(int i = 0; i < 32; i ++){
        if(piezas[i]->getPos() == pos){
            return i;
        }
    }
    return -1;
}

void clsScreenPartida::setPiezaPos(Vector2f origin, Vector2f pos){
    int i = getCasillaPieza(origin);
    if(i != -1){
        piezas[i]->setPos(pos);
    }
}

void clsScreenPartida::setPriority(Vector2f pos){
    int i = getCasillaPieza(pos);
    if(i != -1){
        priority = i;
    }
}

