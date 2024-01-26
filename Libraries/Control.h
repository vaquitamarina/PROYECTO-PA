#ifndef CONTROL_H
#define CONTROL_H

using namespace std;
using namespace sf;   
class clsAdmin;
class clsControl{
    protected:
        clsScreen *menu;
        clsRegistro *registro;
        clsAdmin *admin;
        int selected;
        int max;
        int min;
        int op;
        bool in;
        string usuarioN;
        string usuarioB;
        
        int oldSelected;
        int cont = 0;
    public:
        clsControl(clsScreen *,int,int,int,int);
        clsControl(clsScreen *,int,int,int,int,clsRegistro *,clsAdmin *);
        void pressUp();
        void pressDown();
        void pressLeft();
        void pressRight();
        void pressEnter(int* a);
        void pressEscape(int* a);
};
#include "Admin.h"

#include "Control.cpp"

#endif

