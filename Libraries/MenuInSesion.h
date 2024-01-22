#ifndef MENUINSESION_H
#define MENUINSESION_H


using namespace std;
using namespace sf;  

class clsMenuInicioSesion : public clsMenu{
    private:
        
    public:
        clsMenuInicioSesion(RenderWindow *w,Font *f);
        void setTextbox(Font *f);
        void setTextboxColor(int, Color, bool);
        void setTextboxSelected(int, bool);
        void draw();
        void typedOn(Event);
        void deleteTextboxString(int);
        string getTextbox(int);

};

#include "MenuInSesion.cpp"

#endif