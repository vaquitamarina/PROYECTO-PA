#ifndef ADMIN_H
#define ADMIN_H

using namespace std;
using namespace sf;   

class clsAdmin{
    private:
        clsScreen *screen[10];
        clsControl *control[10];
        Font fonts[10];
        Music soundtrack[10];
        Sound effect[10];
        SoundBuffer effectBuffer[10];
        RenderWindow *window;
        clsRegistro registro;
        clsPartida *partida;
        int actualScreen;
        int actualSoundtrack;
        Clock clock;
        Texture AnimationSpriteShet;
        AnimationManager am;
        //
        Sprite prueba;
        //

    public:
        clsAdmin(RenderWindow *window);
        void iniciarPrograma();
        void iniciarPartida(string, string);
        void setSoundtrack(int);
        void playSound(int);
        void getWandH(int,int);
};

#include "Admin.cpp"

#endif