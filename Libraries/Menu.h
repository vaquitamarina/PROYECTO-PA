#define ARRIBA 119
#define ABAJO 115
#define ENTER 13
#define MaximosMenus 3

#include <bits/stdc++.h>

using namespace std;
using namespace sf;   

class clsMenu{
    private:
        clsPartida *pPartida;
        RenderWindow *window;
        Font gameFont;
        Music soundtrack;
        SoundBuffer efectoSonidoMenu;
        Sound efecto;
        Text titulo;
        Text opciones[MaximosMenus];
        Texture tBackground;
        Sprite *background;
        int MainMenuSelected;

    public:
        clsMenu(RenderWindow *w);

        void crearPartida(string,string);
        void menuPrincipal();
        void draw(RenderWindow &window);
        void menuPrincipalSwitch();
        void moveUp();
        void moveDown();
};


//constructor

clsMenu::clsMenu(RenderWindow *w){
    float n=0.f;
    window = w;
    float ancho=window->getSize().x;
    float alto=window->getSize().y;

    gameFont.loadFromFile("./Fonts/04B_30__.TTF");

    soundtrack.openFromFile("./music/An_Engineer_Gaming_Megalo.ogg");
    soundtrack.play();
    soundtrack.setLoop(true);

    tBackground.loadFromFile("./Images/wallpaperbetter.com_1440x900.jpg");
    background = new Sprite(tBackground);

    titulo.setFont(gameFont);
    titulo.setString("Ajedrez");
    titulo.setCharacterSize(80);
    titulo.setPosition(400.f,30.f);


    //Iniciar partida
    opciones[0].setFont(gameFont);
    opciones[0].setColor(Color::Yellow);
    opciones[0].setString("Inciar partida");
    opciones[0].setCharacterSize(30);
    opciones[0].setPosition(400.f,300.f);

    //Configuracion
    opciones[1].setFont(gameFont);
    opciones[1].setColor(Color::White);
    opciones[1].setString("Configuracion");
    opciones[1].setCharacterSize(30);
    opciones[1].setPosition(400.f,400.f);

    //Salir
    opciones[2].setFont(gameFont);
    opciones[2].setColor(Color::White);
    opciones[2].setString("Salir");
    opciones[2].setCharacterSize(30);
    opciones[2].setPosition(400.f,500.f);

    MainMenuSelected = 0;

    efectoSonidoMenu.loadFromFile("./soundsEffects/snd_select.wav");
    efecto.setBuffer(efectoSonidoMenu);

}

void clsMenu :: draw(RenderWindow &window)
{
    for (int i = 0; i < MaximosMenus; i++)
    {
        window.draw(opciones[i]);
    }
}

void clsMenu :: moveDown()
{
    if(MainMenuSelected + 1 <= MaximosMenus)
    {
        opciones[MainMenuSelected].setColor(Color::White);
        MainMenuSelected++;
        if(MainMenuSelected==3)
        {
            MainMenuSelected=0;
        }
        opciones[MainMenuSelected].setColor(Color::Yellow);
    }
}
void clsMenu :: moveUp()
{
    if(MainMenuSelected - 1 >= -1)
    {
        opciones[MainMenuSelected].setColor(Color::White);
        MainMenuSelected--;
        if(MainMenuSelected==-1)
        {
            MainMenuSelected=2;
        }
        opciones[MainMenuSelected].setColor(Color::Yellow);
    }
}



//------------------------------------------------------------------------------//
//Metodos//
void clsMenu :: menuPrincipalSwitch(){
    switch(MainMenuSelected){
        case 0:
            break;
        case 1:
            break;
        case 2:
            window->close();
            break;
    }
}

void clsMenu :: menuPrincipal()
{
    while (window->isOpen())
    {
        Event event;
        while (window->pollEvent(event))
        {
            if (event.type == Event ::Closed)
                window->close();

            if(event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
                {
                    window->close();
                    break;
                }
            if (event.type == Event::KeyReleased)
            {
                if(event.key.code == Keyboard::Up)
                {
                    moveUp();
                    efecto.play();
                    break;
                }
                if(event.key.code == Keyboard::Down)
                {
                    moveDown();
                    efecto.play();
                    break;
                }
                if(event.key.code == Keyboard::Enter)
                {
                    menuPrincipalSwitch();
                }
            }
        }
    
        window->clear();
            window->draw(*background);
            window->draw(titulo);
            window->draw(opciones[0]);
            window->draw(opciones[1]);
            window->draw(opciones[2]);
        window->display();
    }
    
}


void clsMenu::crearPartida(string n,string b){
    pPartida = new clsPartida(n,b);
}

