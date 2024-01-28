#ifndef SCREEN_H
#define SCREEN_H
using namespace std;
using namespace sf;  

class clsScreen{
    protected:
        RenderWindow *window;
        clsTextbox *textbox[2];
        //Font    fonts[NUM_FONTS]; 
        //Music   soundtrack[NUM_SOUNDTRACKS];
        Text    text[100];
        Texture textures[1000];
        Sprite  *sprites[1000];
        Texture texturesCo[100];
        Texture frames[500];
        int actualTexture = 0;
        Clock *reloj;

    public:
        clsScreen(RenderWindow*);
        clsScreen(RenderWindow *,Clock*);
        //Metodos de imagenes
        void setSprite(int,string);
        void setScaleSprite(int, Vector2f);
        void setPosSprite(int, Vector2f);
        Vector2f getPosSprite(int);
        void setSpriteOpacity(int, int);
        //Metodos de texturas
        void setTexture(int, string);
        void setTextureTexturetoSprite(int, int);
        void setTextureForm(int, int, int, int, int);


        // void setScaleTexture(int, Vector2f);
        // void setPosTexture(int, Vector2f);
        // void setTextureOpacity(int, int);
        // void setTextureColor(int, Color);
        // void setTextureRotation(int, float);
        // void setTextureOrigin(int, Vector2f);
        // void setTextureScale(int, Vector2f);
        // void setTexturtureRect();

        //Metodos de texto
        void setText(int, Font *, string, int, Vector2f);
        void setTextColor(int, Color);

        //animacion
        void update(int,int);
        
        //Cajas de texto
        void draw();
        void closeWindow();
};

#include "Screen.cpp"
#endif