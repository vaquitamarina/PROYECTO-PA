#ifndef REINA_H
#define REINA_H

#include "Pieza.h"

class clsReina : public clsPieza{
    private:

    public:
        clsReina(Vector2f,char);
        bool testMovement(Vector2f);
};

#include "Reina.cpp"

#endif