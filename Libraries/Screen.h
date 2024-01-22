#ifndef SCREEN_H
#define SCREEN_H

using namespace std;
using namespace sf;   

class clsActualScreen{
    private:
        clsMenu *screen[10];
        clsControl *control[10];
        Font fonts[10];
        Music soundtrack[10];
        Sound effect[10];
        SoundBuffer effectBuffer[10];
        RenderWindow *window;
        int actualScreen;
    public:
        clsActualScreen(RenderWindow *window);
        void iniciarPartida();
};

#include "Screen.cpp"

#endif