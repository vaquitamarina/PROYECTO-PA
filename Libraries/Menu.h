#define ARRIBA 119
#define ABAJO 115
#define ENTER 13
#define MaximosMenus 3

#define NUM_FONTS 2
#define NUM_SOUNDTRACKS 2
#include <bits/stdc++.h>

using namespace std;
using namespace sf;   


//Clases menu;

class clsMenuInicioSesion;
class clsMenu;

class clsMenu{
    protected:
        RenderWindow *window;
        //Font    fonts[NUM_FONTS]; 
        //Music   soundtrack[NUM_SOUNDTRACKS];
        Text    text[10];
        Texture textures[10];
        Sprite  *sprites[10];

    public:
        clsMenu(RenderWindow *);
        void setBackground(int,string);
        void setText(int, Font *, string, int, Vector2f);
        void setTextColor(int, Color);
        void draw();
};
clsMenu::clsMenu(RenderWindow *w){
    window = w;
}

void clsMenu::setBackground(int n,string b){
    Image image;
    image.loadFromFile(b);
    
    textures[n].loadFromImage(image);
    sprites[n] = new Sprite(textures[n]);
}

void clsMenu::setText(int i,Font *f, string s, int c, Vector2f pos){
    
    text[i].setFont(*f);
    text[i].setString(s);
    text[i].setCharacterSize(c);
    text[i].setPosition(pos); 
}

void clsMenu::setTextColor(int i, Color color){
    text[i].setColor(color);
}

void clsMenu::draw(){
    window->draw(*sprites[0]);
    window->draw(text[0]);
    window->draw(text[1]);
    window->draw(text[2]);
    window->draw(text[3]);
}


// class clsMenu{
//     protected:
//         clsPartida *pPartida;
//         RenderWindow *window;
//         Font gameFont;
//         Music soundtrack;
//         SoundBuffer efectoSonidoMenu;
//         Sound efecto;
//         Text titulo;
//         Text opciones[MaximosMenus];
//         Texture tBackground;
//         Sprite *background;
//         clsMenuInicioSesion *menuInicioSesion;
//         int mainMenuSelected;
//         int actualScreen;

//     public:
//         clsMenu(RenderWindow *w);
//         clsMenu();
//         void crearPartida(string,string);
//         void menuPrincipal();

//         void draw();
//         void menuEnter();
//         void moveUp();
//         void moveDown();
// };

// class clsMenuInicioSesion : public clsMenu{
//     private:
//         Text opciones[2];
//         clsTextbox *textbox;
//     public:
//         clsMenuInicioSesion(RenderWindow *w);
//         void moveDown();
//         void moveUp();
//         void draw();
//         void menuEnter();
// };

// //constructor clsenu
// clsMenu::clsMenu(){}
// clsMenu::clsMenu(RenderWindow *w){
//     float n=0.f;
//     window = w;
//     window->setKeyRepeatEnabled(false);
//     menuInicioSesion = new clsMenuInicioSesion(window);
//     float ancho=window->getSize().x;
//     float alto=window->getSize().y;

//     gameFont.loadFromFile("./Fonts/04B_30__.TTF");

//     soundtrack.openFromFile("./music/An_Engineer_Gaming_Megalo.ogg");
//     soundtrack.play();
//     soundtrack.setLoop(true);

//     tBackground.loadFromFile("./Images/wallpaperbetter.com_1440x900.jpg");
//     background = new Sprite(tBackground);

//     titulo.setFont(gameFont);
//     titulo.setString("Ajedrez");
//     titulo.setCharacterSize(80);
//     titulo.setPosition(400.f,30.f);


//     //Iniciar partida
//     opciones[0].setFont(gameFont);
//     opciones[0].setColor(Color::Yellow);
//     opciones[0].setString("Inciar partida");
//     opciones[0].setCharacterSize(30);
//     opciones[0].setPosition(400.f,300.f);

//     //Configuracion
//     opciones[1].setFont(gameFont);
//     opciones[1].setColor(Color::White);
//     opciones[1].setString("Configuracion");
//     opciones[1].setCharacterSize(30);
//     opciones[1].setPosition(400.f,400.f);

//     //Salir
//     opciones[2].setFont(gameFont);
//     opciones[2].setColor(Color::White);
//     opciones[2].setString("Salir");
//     opciones[2].setCharacterSize(30);
//     opciones[2].setPosition(400.f,500.f);

//     mainMenuSelected = 0;
//     actualScreen = 0;

//     efectoSonidoMenu.loadFromFile("./soundsEffects/snd_select.wav");
//     efecto.setBuffer(efectoSonidoMenu);

// }

// //Esta funcion dibuja todos los menus segun las opciones
// void clsMenu :: draw(){
//     switch(actualScreen){
//         case 0:  //Menu principal
//             window->draw(*background);
//             window->draw(titulo);
//             window->draw(opciones[0]);
//             window->draw(opciones[1]);
//             window->draw(opciones[2]);
//             break;
//         case 1:  //Menu inicio sesion
//             menuInicioSesion->draw();
            
//             break;
//         case 2:  //Menu configuracion
//             window->draw(*background);
//             break;
//     }
// } 

// //---------------------------------------------------------------------------------//


// //Metodos clsMenu//
// void clsMenu :: moveDown()
// {
//     if(mainMenuSelected + 1 <= MaximosMenus)
//     {
//         opciones[mainMenuSelected].setColor(Color::White);
//         mainMenuSelected++;
//         if(mainMenuSelected==3)
//         {
//             mainMenuSelected=0;
//         }
//         opciones[mainMenuSelected].setColor(Color::Yellow);
//     }
// }
// void clsMenu :: moveUp()
// {
//     if(mainMenuSelected - 1 >= -1)
//     {
//         opciones[mainMenuSelected].setColor(Color::White);
//         mainMenuSelected--;
//         if(mainMenuSelected==-1)
//         {
//             mainMenuSelected=2;
//         }
//         opciones[mainMenuSelected].setColor(Color::Yellow);
//     }
// }

// void clsMenu :: menuEnter(){
//     switch(mainMenuSelected){
//         case 0:
//             actualScreen = 1;
//             break;
//         case 1:
//             actualScreen = 2;
//             break;
//         case 2:
//             window->close();
//             break;
//     }
// }

// void clsMenu :: menuPrincipal()
// {
//     bool fullscreen=false;
    
//     while (window->isOpen())
//     {
//         Event event;
//         while (window->pollEvent(event))
//         {
//             //control de la ventana;

//             if (event.type == Event ::Closed)
//                 window->close();

            
//             if(event.type == Event::KeyPressed && event.key.code == Keyboard::F)
//             {
//                 window->close();

//                 if(!fullscreen)
//                 {
//                     window = new RenderWindow(VideoMode::getDesktopMode(),"Ajedrez",Style::Fullscreen);
//                     fullscreen=true;
                    
//                 }
//                 else
//                 {
//                     window = new RenderWindow(VideoMode(1280,720),"Ajedrez");
//                     fullscreen=false;
//                 }
//                 break;                
//             }
            

//             //control de teclas;

//             if (event.type == Event::KeyPressed)
//             {
//                 if(actualScreen == 0){
//                     if(event.key.code == Keyboard::Up)
//                     {
//                         moveUp();
//                         efecto.play();
//                         break;
//                     }
//                     if(event.key.code == Keyboard::Down)
//                     {
//                         moveDown();
//                         efecto.play();
//                         break;
//                     }
//                     if(event.key.code == Keyboard::Enter)
//                     {
//                         menuEnter();
//                         efecto.play();
//                     }
//                     if(event.key.code == Keyboard::Escape){
//                         window->close();
//                     }
                    
//                 }
//                 if(actualScreen == 1){
//                     if(event.key.code == Keyboard::Up)
//                     {
//                         menuInicioSesion->moveUp();
//                         efecto.play();
//                         break;
//                     }
//                     if(event.key.code == Keyboard::Down)
//                     {
//                         menuInicioSesion->moveDown();
//                         efecto.play();
//                         break;
//                     }
//                     if(event.key.code == Keyboard::Escape){
//                         actualScreen = 0;
//                         efecto.play();
//                     }
//                     if(event.key.code == Keyboard::Enter){
//                         menuInicioSesion->menuEnter();
//                         efecto.play();
//                     }
//                 }
//                 if(actualScreen == 2){
//                     if(event.key.code == Keyboard::Escape){
//                         actualScreen = 0;
//                         efecto.play();
//                     }
//                 }

//             }
//            //if(mainMenuEnter == 1 && event.type == Event::TextEntered){
//            //         textbox->typedOn(event);
//            // }
//         }
    
//         window->clear();
//             draw();
//         window->display();
//     }
    
// }


// void clsMenu::crearPartida(string n,string b){
//     pPartida = new clsPartida(n,b);
// }





// // Clase del menu del inicio de sesion, registro de usuarios e iniciar partida;

// //Constructor

// clsMenuInicioSesion::clsMenuInicioSesion(RenderWindow *w){
//     window = w;
//     gameFont.loadFromFile("./Fonts/04B_30__.TTF");

//     tBackground.loadFromFile("./Images/backgroundPartida.png");
//     background = new Sprite(tBackground);

//     textbox = new clsTextbox(15,Color::White,true);
//     textbox->setFont(gameFont);
//     textbox->setPosition({100,100});

//     opciones[0].setFont(gameFont);
//     opciones[0].setColor(Color::Yellow);
//     opciones[0].setString("Iniciar Sesion");
//     opciones[0].setCharacterSize(30);
//     opciones[0].setPosition(400.f,300.f);

//     //Configuracion
//     opciones[1].setFont(gameFont);
//     opciones[1].setColor(Color::White);
//     opciones[1].setString("Registrar Usuario");
//     opciones[1].setCharacterSize(30);
//     opciones[1].setPosition(400.f,400.f);
//     mainMenuSelected = 0;
//     actualScreen = 0;
// }



// //---------------------------------------------------------------------------------//

// //Metodos//
// void clsMenuInicioSesion :: moveDown()
// {
//     if(mainMenuSelected + 1 <= 2)
//     {
//         opciones[mainMenuSelected].setColor(Color::White);
//         mainMenuSelected++;
//         if(mainMenuSelected==2)
//         {
//             mainMenuSelected=0;
//         }
//         opciones[mainMenuSelected].setColor(Color::Yellow);
//     }
// }
// void clsMenuInicioSesion :: moveUp()
// {
//     if(mainMenuSelected - 1 >= -1)
//     {
//         opciones[mainMenuSelected].setColor(Color::White);
//         mainMenuSelected--;
//         if(mainMenuSelected==-1)
//         {
//             mainMenuSelected=1;
//         }
//         opciones[mainMenuSelected].setColor(Color::Yellow);
//     }
// }

// void clsMenuInicioSesion::draw(){
//     switch(actualScreen){
//         case 0:
//             window->draw(*background);
//             window->draw(opciones[0]);
//             window->draw(opciones[1]);
//         case 1:
//             textbox->drawTo(window);
//     }
    
// }

// void clsMenuInicioSesion::menuEnter(){
//     switch(mainMenuSelected){
//         case 0:
//             actualScreen = 0;
//             break;
//         case 1:
//             actualScreen = 1;
//             break;
//     }
//     mainMenuSelected = 0;
// }