#ifndef SCREENINSESION_H
#define SCREENINSESION_H


using namespace std;
using namespace sf;  

class clsScreenInSesion : public clsScreen{
    private:
        
    public:
        clsScreenInSesion(RenderWindow *w,Font *f);
        void setTextbox(Font *f);
        void setTextboxColor(int, Color, bool);
        void setTextboxSelected(int, bool);
        void draw();
        void typedOn(Event);
        void deleteTextboxString(int);
        string getTextbox(int);

};

#include "ScreenInSesion.cpp"

#endif