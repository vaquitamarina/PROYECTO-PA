#ifndef ALFIL_H
#define ALFIL_H

#include "Pieza.h"

class clsAlfil : public clsPieza{
    private:
    public:
        clsAlfil(Vector2f,char);
        bool testMovement(Vector2f pos, bool matriz[][8],bool* turno);
};
#include "Alfil.cpp"
#endif
