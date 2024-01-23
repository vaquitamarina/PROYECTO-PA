#ifndef MENU_H
#define MENU_H
using namespace std;
using namespace sf;  

class clsMenu{
    protected:
        RenderWindow *window;
        clsTextbox *textbox[2];
        //Font    fonts[NUM_FONTS]; 
        //Music   soundtrack[NUM_SOUNDTRACKS];
        Text    text[10];
        Texture textures[10];
        Sprite  *sprites[10];
        

    public:
        clsMenu(RenderWindow *);
        //Metodos de imagenes
        void setSprite(int,string);
        void setScaleSprite(int, Vector2f);
        void setSpriteOpacity(int, int);
        //Metodos de texto
        void setText(int, Font *, string, int, Vector2f);
        void setTextColor(int, Color);
        
        //Cajas de texto
        void draw();
        void closeWindow();
};

#include "Menu.cpp"
#endif