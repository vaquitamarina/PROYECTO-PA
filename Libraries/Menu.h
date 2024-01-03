#define ARRIBA 119
#define ABAJO 115
#define ENTER 13

#include <bits/stdc++.h>
using namespace std;   

class clsMenu{
    private:
        clsPartida *pPartida;
        sf::RenderWindow *window;
        sf::Font gameFont;
        sf::Music soundtrack;
        sf::Text titulo;
        sf::Text opciones[3];
        sf::Texture tBackground;
        sf::Sprite *background;
    public:
        clsMenu(sf::RenderWindow *w);
        int menu(string titulo, string opciones[], int n);
        void menuPrincipal();
        void crearPartida(string,string);
};
//constructor

clsMenu::clsMenu(sf::RenderWindow *w){
    float n=0.f;
    window = w;
    gameFont.loadFromFile("./Fonts/04B_30__.TTF");
    soundtrack.openFromFile("./music/Megalovania-(128kbps).ogg");
    soundtrack.play();
    soundtrack.setLoop(true);
    tBackground.loadFromFile("./Images/background.png");
    background = new sf::Sprite(tBackground);
    titulo.setFont(gameFont);
    titulo.setString("Ajedrez");
    titulo.setCharacterSize(80);
    titulo.setPosition(400.f,30.f);
    opciones[0].setString("Inciar partida");
    opciones[1].setString("Configuracion");
    opciones[2].setString("Salir");
    for(int i=1;i<=3;i++){
        opciones[i-1].setFont(gameFont);
        opciones[i-1].setCharacterSize(30);
        n = 200 + 100*i;
        opciones[i-1].setPosition(400.f, n);
    }
}




//------------------------------------------------------------------------------//
//Metodos//
void clsMenu::menuPrincipal(){
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event ::Closed)
                window->close();
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









//------------------------------------------------------------------------------//
//Menus//
int clsMenu::menu(string titulo, string opciones[], int n){
    int opSeleccionada = 1;
    int tecla;

    bool flag = true;

    do{
        system("cls");
        gotoxy(5, 10 + opSeleccionada); cout << "==>" << endl;
        gotoxy(15, 1); cout << titulo;
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 11 + i); cout << i + 1 << ") " << opciones[i];
        }
    

        do {
            tecla = getch2();
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch(tecla){
            case ARRIBA:   
                opSeleccionada--;

                if (opSeleccionada < 1) {
                    opSeleccionada = n;
                }
                break;
 
            case ABAJO:
                opSeleccionada++;
 
                if (opSeleccionada > n) {
                    opSeleccionada = 1;
                }
                break; 
            case ENTER:
                flag = false;
                break;
        }
   }while(flag);
 
   return opSeleccionada;
}
/*
void clsMenu::menuPrincipal(){
    bool flag = true;
    int op;

    string titulo = R"(
________        ___  _______   ________  ________  _______   ________     
|\   __  \      |\  \|\  ___ \ |\   ___ \|\   __  \|\  ___ \ |\_____  \    
\ \  \|\  \     \ \  \ \   __/|\ \  \_|\ \ \  \|\  \ \   __/| \|___/  /|   
 \ \   __  \  __ \ \  \ \  \_|/_\ \  \ \\ \ \   _  _\ \  \_|/__   /  / /   
  \ \  \ \  \|\  \\_\  \ \  \_|\ \ \  \_\\ \ \  \\  \\ \  \_|\ \ /  /_/__  
   \ \__\ \__\ \________\ \_______\ \_______\ \__\\ _\\ \_______\\________\
    \|__|\|__|\|________|\|_______|\|_______|\|__|\|__|\|_______|\|_______| )";
    string opciones[] = {"Iniciar partida","Configuracion", "Salir"};
    int n = 3;

    do{
        op = menu(titulo,opciones,n);

        switch(op){
            case 1: 
                {
                system("cls");
                string n,b;
                cout<<"Ingrese los 2 usuarios";
                cin>>n;
                cin>>b,
                system("cls");
                crearPartida(n,b);
                pPartida -> mostrarTablero();
                
                

                system("pause>nul");
                }
                break;
            case 2:
                system("cls");
                cout<<"chau";
                system("pause>nul");
                break;
            case 3:
                flag = false;
                break;
        }
    }while(flag);
}
*/