#ifndef TORRE_H
#define TORRE_H
#include "Pieza.h"

class clsTorre : public clsPieza{
    private:
    public:
        clsTorre(Vector2f,char);
        bool testMovement(Vector2f pos, bool matriz[][8],bool* turno);
};

#include "Torre.cpp"

#endif