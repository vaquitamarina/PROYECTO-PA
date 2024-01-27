#ifndef REY_H
#define REY_H

#include "Pieza.h"

class clsRey : public clsPieza{
    private:
    public:
        clsRey(Vector2f,char);
        bool testMovement(Vector2f,bool matriz[8][8]);
};

#include "Rey.cpp"

#endif