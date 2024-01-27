#ifndef PEON_H
#define PEON_H

#include "Pieza.h"

class clsPeon : public clsPieza{
    private:
        bool firstMovement;
    public:
        clsPeon(Vector2f,char);
        bool testMovement(Vector2f,bool matriz[8][8]);
};
#include "Peon.cpp"
#endif