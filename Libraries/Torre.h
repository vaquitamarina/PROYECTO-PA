#ifndef TORRE_H
#define TORRE_H
#include "Pieza.h"

class clsTorre : public clsPieza{
    private:
    public:
        clsTorre(Vector2f,char);
        bool testMovement(Vector2f);
};

#include "Torre.cpp"

#endif