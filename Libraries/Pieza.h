#ifndef PIEZA_H
#define PIEZA_H
using namespace std;

class clsPieza{
    protected:
        int posX;
        int posY;
        char color;
        bool estado;
        string figura;

    public:
        clsPieza(int, int, char, string);
        void setPosX(int);
        void setPosY(int);
        char getColor();
        string getFigura();
};

#include "Pieza.cpp"

#endif