#ifndef ADMIN_H
#define ADMIN_H

using namespace std;
using namespace sf;   

class clsAdmin{
    private:
        clsMenu *screen[10];
        clsControl *control[10];
        Font fonts[10];
        Music soundtrack[10];
        Sound effect[10];
        SoundBuffer effectBuffer[10];
        RenderWindow *window;
        clsRegistro registro;
        int actualScreen;
    public:
        clsAdmin(RenderWindow *window);
        void iniciarPartida();
};

#include "Admin.cpp"

#endif