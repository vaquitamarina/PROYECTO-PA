#include "Admin.h"

using namespace std;
using namespace sf;  

clsAdmin::clsAdmin(RenderWindow *w){
    window = w;
    actualScreen = 0;
    fonts[0].loadFromFile("./Fonts/MonsterFriend2Back.otf");
    fonts[1].loadFromFile("./Fonts/pixelsans.ttf");
    fonts[2].loadFromFile("./Fonts/pixela-extreme.otf");
    fonts[3].loadFromFile("./Fonts/hachicro.TTF");
    fonts[4].loadFromFile("./Fonts/CryptOfTomorrow.ttf");

    effectBuffer[0].loadFromFile("./soundsEffects/snd_select.wav");
    effect[0].setBuffer(effectBuffer[0]);

    soundtrack[0].openFromFile("./Music/An_Engineer_Gaming_Megalo.ogg");
    soundtrack[1].openFromFile("./Music/Red.ogg");
    soundtrack[2].openFromFile("./Music/big_shot.ogg");
    soundtrack[0].play();
    soundtrack[0].setLoop(true);
    soundtrack[1].setLoop(true);
    soundtrack[2].setLoop(true);
    actualSoundtrack=0;

    //prueba de animacion por frames
    screen[4] = new clsScreen(window);
    screen[4]->setSprite(0,"./Ima"); 

    //Menu principal;
    screen[0] = new clsScreen(window);
    //background
    screen[0]->setSprite(0,"./Images/backgroundMenu.jpg");
    screen[0]->setText(0,&fonts[0],"CHESS",80,{400,30});
    //
    screen[0]->setText(1,&fonts[4],"Start Game",30,{400,300});
    screen[0]->setTextColor(1,Color::Yellow);
    screen[0]->setText(2,&fonts[4],"Settings",30,{400,400});
    screen[0]->setText(3,&fonts[4],"Quit",30,{400,500});
    
    control[0] = new clsControl(screen[0], 1, 3, 1, 0);


    //Menu inicio de sesion;
    screen[1] = new clsScreenInSesion(window,&fonts[0]);
    //background
    screen[1]->setSprite(0,"./Images/prueba.png");
    screen[1]->setScaleSprite(0,{0.65,0.65});

    //
    screen[1]->setText(0,&fonts[0],"Iniciar Sesion",30,{400,300});
    screen[1]->setTextColor(0,Color::Yellow);
    screen[1]->setText(1,&fonts[0],"Registrar Usuario",30,{400,400});
    control[1] = new clsControl(screen[1],0,1,0, 1, &registro,this);

    //Menu de configuracion
    screen[2] = new clsScreen(window);
    screen[2]->setSprite(0,"./Images/backgroundConfig.png");
    
    control[2] = new clsControl(screen[2],0,0,0,2);

    //Partida
    screen[3] = new clsScreenPartida(window,partida);
    screen[3]->setSprite(0,"./Images/gatito.png");
    screen[3]->setScaleSprite(0,{1.3,1.2});
    control[3] = new clsControl(screen[3],0,7,0,3);
}

void clsAdmin::iniciarPrograma(){
    while (window->isOpen()){
        Event event;    
        while (window->pollEvent(event)){
            if(event.type == Event ::Closed){
                window->close();
            }
            if(event.type == Event ::TextEntered){
                reinterpret_cast <clsScreenInSesion *> (screen[1]) -> typedOn(event);
            }
            if(event.type == Event ::KeyPressed){
                if(event.key.code == Keyboard::Up){
                    control[actualScreen]->pressUp();
                    effect[0].play();
                }
                if(event.key.code == Keyboard::Down){
                    control[actualScreen]->pressDown();
                    effect[0].play();
                }
                if(event.key.code == Keyboard::Enter){
                    control[actualScreen]->pressEnter(&actualScreen);
                    effect[0].play();
                }
                if(event.key.code == Keyboard::Escape){
                    control[actualScreen]->pressEscape(&actualScreen);
                    effect[0].play();
                }
                if(event.key.code == Keyboard::Left){
                    control[actualScreen]->pressLeft();
                    effect[0].play();
                }
                if(event.key.code == Keyboard::Right){
                    control[actualScreen]->pressRight();
                    effect[0].play();
                }
               
            }
        }
    window->clear();
        if(actualScreen == 3){
            reinterpret_cast<clsScreenPartida *>(screen[actualScreen])->draw();
        }
        else{
            screen[actualScreen]->draw();
        }
    window->display();
    }
}

void clsAdmin::iniciarPartida(string n, string b){
    partida = new clsPartida(n,b);
}

void clsAdmin::setSoundtrack(int i){
    soundtrack[actualSoundtrack].stop();
    soundtrack[i].play();

    actualSoundtrack = i;
}