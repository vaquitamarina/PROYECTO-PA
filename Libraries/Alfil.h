#ifndef ALFIL_H
#define ALFIL_H

#include "Pieza.h"

class clsAlfil : public clsPieza{
    private:
    public: 
        bool testMovement(Vector2f);
};
#include "Alfil.cpp"
#endif
