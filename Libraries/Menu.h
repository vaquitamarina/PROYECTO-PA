#define ARRIBA 119
#define ABAJO 115
#define ENTER 13
#define MaximosMenus 3

#include <bits/stdc++.h>

using namespace std;
using namespace sf;   


//Clases menu;

class clsMenuInicioSesion;


class clsMenu{
    protected:
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
        clsTextbox *textbox;
        clsMenuInicioSesion *menuInicioSesion;
        int mainMenuSelected;
        int mainMenuEnter;

    public:
        clsMenu(RenderWindow *w);
        clsMenu();
        void crearPartida(string,string);
        void menuPrincipal();

        void draw();
        void menuPrincipalSwitch();
        void moveUp();
        void moveDown();
};

class clsMenuInicioSesion : public clsMenu{
    private:
        Text opciones[2];
    public:
        clsMenuInicioSesion(RenderWindow *w);
        void moveDown();
        void moveUp();
        void draw();
        Text getOpciones(int);
};

//constructor clsenu
clsMenu::clsMenu(){}
clsMenu::clsMenu(RenderWindow *w){
    float n=0.f;
    window = w;
    menuInicioSesion = new clsMenuInicioSesion(window);
    float ancho=window->getSize().x;
    float alto=window->getSize().y;

    gameFont.loadFromFile("./Fonts/04B_30__.TTF");

    textbox = new clsTextbox(15,Color::White,true);
    textbox->setFont(gameFont);
    textbox->setPosition({100,100});

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

    mainMenuSelected = 0;
    mainMenuEnter = 0;

    efectoSonidoMenu.loadFromFile("./soundsEffects/snd_select.wav");
    efecto.setBuffer(efectoSonidoMenu);

}

//Esta funcion dibuja todos los menus segun las opciones
void clsMenu :: draw(){
    switch(mainMenuEnter){
        case 0:
            window->draw(*background);
            window->draw(titulo);
            window->draw(opciones[0]);
            window->draw(opciones[1]);
            window->draw(opciones[2]);
            break;
        case 1:
            menuInicioSesion->draw();
            
            break;
        case 2:
            window->draw(*background);

            break;
    }
} 

//---------------------------------------------------------------------------------//


//Metodos clsMenu//
void clsMenu :: moveDown()
{
    if(mainMenuSelected + 1 <= MaximosMenus)
    {
        opciones[mainMenuSelected].setColor(Color::White);
        mainMenuSelected++;
        if(mainMenuSelected==3)
        {
            mainMenuSelected=0;
        }
        opciones[mainMenuSelected].setColor(Color::Yellow);
    }
}
void clsMenu :: moveUp()
{
    if(mainMenuSelected - 1 >= -1)
    {
        opciones[mainMenuSelected].setColor(Color::White);
        mainMenuSelected--;
        if(mainMenuSelected==-1)
        {
            mainMenuSelected=2;
        }
        opciones[mainMenuSelected].setColor(Color::Yellow);
    }
}

void clsMenu :: menuPrincipalSwitch(){
    switch(mainMenuSelected){
        case 0:
            mainMenuEnter = 1;

            break;
        case 1:
            mainMenuEnter = 2;
            break;
        case 2:
            window->close();
            break;
    }
}

void clsMenu :: menuPrincipal()
{
    bool fullscreen=false;
    
    while (window->isOpen())
    {
        Event event;
        while (window->pollEvent(event))
        {
            //control de la ventana;

            if (event.type == Event ::Closed)
                window->close();

            if(event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
                {
                    window->close();
                    break;
                }
            if(event.type == Event::KeyPressed && event.key.code == Keyboard::F)
            {
                window->close();

                if(!fullscreen)
                {
                    window = new RenderWindow(VideoMode::getDesktopMode(),"Ajedrez",Style::Fullscreen);
                    fullscreen=true;
                    
                }
                else
                {
                    window = new RenderWindow(VideoMode(1280,720),"Ajedrez");
                    fullscreen=false;
                }
                break;                
            }
            

            //control de teclas;

            if (event.type == Event::KeyPressed)
            {
                if(mainMenuEnter == 0){
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
                if(mainMenuEnter = 1){
                    if(event.key.code == Keyboard::Up)
                    {
                        menuInicioSesion->moveUp();
                        efecto.play();
                        break;
                    }
                    if(event.key.code == Keyboard::Down)
                    {
                        menuInicioSesion->moveDown();
                        efecto.play();
                        break;
                    }

                }

            }
           //if(mainMenuEnter == 1 && event.type == Event::TextEntered){
           //         textbox->typedOn(event);
           // }
        }
    
        window->clear();
            draw();
        window->display();
    }
    
}


void clsMenu::crearPartida(string n,string b){
    pPartida = new clsPartida(n,b);
}





// Clase del menu del inicio de sesion, registro de usuarios e iniciar partida;

//Constructor

clsMenuInicioSesion::clsMenuInicioSesion(RenderWindow *w){
    window = w;
    gameFont.loadFromFile("./Fonts/04B_30__.TTF");

    tBackground.loadFromFile("./Images/background.png");
    background = new Sprite(tBackground);

    opciones[0].setFont(gameFont);
    opciones[0].setColor(Color::Yellow);
    opciones[0].setString("Iniciar Sesion");
    opciones[0].setCharacterSize(30);
    opciones[0].setPosition(400.f,300.f);

    //Configuracion
    opciones[1].setFont(gameFont);
    opciones[1].setColor(Color::White);
    opciones[1].setString("Registrar Usuario");
    opciones[1].setCharacterSize(30);
    opciones[1].setPosition(400.f,400.f);
}



//---------------------------------------------------------------------------------//

//Metodos//
void clsMenuInicioSesion :: moveDown()
{
    if(mainMenuSelected + 1 <= 2)
    {
        opciones[mainMenuSelected].setColor(Color::White);
        mainMenuSelected++;
        if(mainMenuSelected==2)
        {
            mainMenuSelected=0;
        }
        opciones[mainMenuSelected].setColor(Color::Yellow);
    }
}
void clsMenuInicioSesion :: moveUp()
{
    if(mainMenuSelected - 1 >= -1)
    {
        opciones[mainMenuSelected].setColor(Color::White);
        mainMenuSelected--;
        if(mainMenuSelected==-1)
        {
            mainMenuSelected=1;
        }
        opciones[mainMenuSelected].setColor(Color::Yellow);
    }
}

void clsMenuInicioSesion::draw(){
    window->draw(*background);
    window->draw(opciones[0]);
    window->draw(opciones[1]);
}

Text clsMenuInicioSesion::getOpciones(int n){
    return titulo;
}