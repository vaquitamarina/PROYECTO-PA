#ifndef REINA_H
#define REINA_H

#include "Pieza.h"

class clsReina : public clsPieza{
    private:

    public:
        clsReina(Vector2f,char);
        bool testMovement(Vector2f pos, bool matriz[][8],bool* turno);
};

#include "Reina.cpp"

#endif