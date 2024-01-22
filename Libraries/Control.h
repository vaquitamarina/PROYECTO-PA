#ifndef CONTROL_H
#define CONTROL_H

using namespace std;
using namespace sf;   

class clsControl{
    protected:
        clsMenu *menu;
        int selected;
        int max;
        int min;
        int op;
        bool in;
    public:
        clsControl(clsMenu *,int,int,int,int);
        void pressUp();
        void pressDown();
        void pressEnter(int* a);
        void pressEscape(int* a);
};


#include "Control.cpp"

#endif

