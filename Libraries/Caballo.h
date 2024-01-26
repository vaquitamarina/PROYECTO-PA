#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class clsCaballo : public clsPieza{
    private:
    public:
        bool testMovement(Vector2f);
};

#include "Caballo.cpp"

#endif