#ifndef PEON_H
#define PEON_H

#include "Pieza.h"

class clsPeon : public clsPieza{
    private:
        bool firstMovement;
    public:
        clsPeon(Vector2f,char);
        bool testMovement(Vector2f pos, bool matriz[][8],bool* turno);
};
#include "Peon.cpp"
#endif