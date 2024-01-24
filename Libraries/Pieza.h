#ifndef PIEZA_H
#define PIEZA_H
using namespace std;

class clsPieza{
    protected:
        int posX;
        int posY;
        char color;
        bool estado;
        Texture texture;
        Sprite  sprite;

    public:
        clsPieza(int, int, char);
        void setPosX(int);
        void setPosY(int);
        int getPosX();
        int getPosY();
        void setSprite(string);
        char getColor();
        virtual bool testMovement(int,int) = 0;
};

#include "Pieza.cpp"

#endif