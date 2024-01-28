#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class clsCaballo : public clsPieza{
    private:
    public:
        clsCaballo(Vector2f,char);
        bool testMovement(Vector2f pos, bool matriz[][8],bool* turno);
};

#include "Caballo.cpp"

#endif