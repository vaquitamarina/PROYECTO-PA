#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class clsCaballo : public clsPieza{
    private:
    public:
        clsCaballo(Vector2f,char);
        bool testMovement(Vector2f,bool matriz[8][8]);
};

#include "Caballo.cpp"

#endif