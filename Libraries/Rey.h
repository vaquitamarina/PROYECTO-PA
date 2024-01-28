#ifndef REY_H
#define REY_H

#include "Pieza.h"

class clsRey : public clsPieza{
    private:
    public:
        clsRey(Vector2f,char);
        bool testMovement(Vector2f pos, bool matriz[][8],bool* turno);
};

#include "Rey.cpp"

#endif