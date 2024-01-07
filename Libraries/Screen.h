#include <bits/stdc++.h>

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

clsActualScreen::clsActualScreen(RenderWindow *w){
    window = w;
    actualScreen = 0;
    fonts[0].loadFromFile("./Fonts/04B_30__.TTF");
    effectBuffer[0].loadFromFile("./soundsEffects/snd_select.wav");
    effect[0].setBuffer(effectBuffer[0]);

    //Menu principal
    screen[0] = new clsMenu(window);
    screen[0]->setBackground(0,"./Images/backgroundMenu.jpg");
    screen[0]->setText(0,&fonts[0],"Ajedrez",80,{400,30});

    screen[0]->setText(1,&fonts[0],"Iniciar Partida",30,{400,300});
    screen[0]->setTextColor(1,Color::Yellow);
    screen[0]->setText(2,&fonts[0],"Configuracion",30,{400,400});
    screen[0]->setText(3,&fonts[0],"Salir",30,{400,500});
    
    control[0] = new clsControl(screen[0], 1, 3, 1);

    screen[1] = new clsMenu(window);
    screen[1]->setBackground(0,"./Images/background.png");
}

void clsActualScreen::iniciarPartida(){
    while (window->isOpen()){
        Event event;

        while (window->pollEvent(event)){
            if(event.type == Event ::Closed){
                window->close();
            }

            if(event.type == Event ::KeyPressed){
                if(event.key.code == Keyboard::Up){
                    control[0]->pressUp();
                    effect[0].play();
                }
                if(event.key.code == Keyboard::Down){
                    control[0]->pressDown();
                    effect[0].play();
                }
                if(event.key.code == Keyboard::Enter){
                    //control[0]->pressEnter(&actualScreen);
                    actualScreen = 1;
                }
            }
        }
    window->clear();
        screen[actualScreen]->draw();
    window->display();
    }
}
