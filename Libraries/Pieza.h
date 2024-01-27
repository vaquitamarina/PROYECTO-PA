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
        Vector2f posOrigin;

    public:
        clsPieza(Vector2f, char);
        // void setPosX(int);
        // void setPosY(int);
        void setPos(Vector2f);
        Vector2f getPos();
        int getPosX();
        int getPosY();
        void setSprite(string);
        char getColor();
        Sprite getSprite();
        virtual bool testMovement(Vector2f,bool matriz[8][8]) = 0;
        void setPosOrigin(Vector2f);
        Vector2f getPosOrigin();
};

#include "Pieza.cpp"

#endif