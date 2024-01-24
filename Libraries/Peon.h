#ifndef PEON_H
#define PEON_H

#include "Pieza.h"

class clsPeon : public clsPieza{
    private:
        bool firstMovement;
    public:
        clsPeon(int,int,char);
        bool testMovement(int,int);
};
#include "Peon.cpp"
#endif