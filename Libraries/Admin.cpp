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
    screen[4] = new clsScreen(window,clock);
    screen[4]->setSprite(0,"./Images/Frames/b001.png");
    screen[4]->setSprite(1,"./Images/Frames/b002.png");
    screen[4]->setSprite(2,"./Images/Frames/b003.png");
     
    screen[4]->setSprite(3,"./Images/Frames/b004.png");
    screen[4]->setSprite(4,"./Images/Frames/b005.png");
    screen[4]->setSprite(5,"./Images/Frames/b006.png");
    screen[4]->setSprite(6,"./Images/Frames/b007.png");
    screen[4]->setSprite(7,"./Images/Frames/b008.png");
    screen[4]->setSprite(8,"./Images/Frames/b009.png");
    screen[4]->setSprite(9,"./Images/Frames/b010.png");
    screen[4]->setSprite(10,"./Images/Frames/b011.png");
    screen[4]->setSprite(11,"./Images/Frames/b012.png");
    screen[4]->setSprite(12,"./Images/Frames/b013.png");
    screen[4]->setSprite(13,"./Images/Frames/b014.png");
    screen[4]->setSprite(14,"./Images/Frames/b015.png");
    screen[4]->setSprite(15,"./Images/Frames/b016.png");
    screen[4]->setSprite(16,"./Images/Frames/b017.png");
    screen[4]->setSprite(17,"./Images/Frames/b018.png");
    screen[4]->setSprite(18,"./Images/Frames/b019.png");
    screen[4]->setSprite(19,"./Images/Frames/b020.png");
    screen[4]->setSprite(20,"./Images/Frames/b021.png");
    screen[4]->setSprite(21,"./Images/Frames/b022.png");
    screen[4]->setSprite(22,"./Images/Frames/b023.png");
    screen[4]->setSprite(23,"./Images/Frames/b024.png");
    screen[4]->setSprite(24,"./Images/Frames/b025.png");
    screen[4]->setSprite(25,"./Images/Frames/b026.png");
    screen[4]->setSprite(26,"./Images/Frames/b027.png");
    screen[4]->setSprite(27,"./Images/Frames/b028.png");
    screen[4]->setSprite(28,"./Images/Frames/b029.png");
    screen[4]->setSprite(29,"./Images/Frames/b030.png");
    screen[4]->setSprite(30,"./Images/Frames/b031.png");
    screen[4]->setSprite(31,"./Images/Frames/b032.png");
    screen[4]->setSprite(32,"./Images/Frames/b033.png");
    screen[4]->setSprite(33,"./Images/Frames/b034.png");
    screen[4]->setSprite(34,"./Images/Frames/b035.png");
    screen[4]->setSprite(35,"./Images/Frames/b036.png");
    screen[4]->setSprite(36,"./Images/Frames/b037.png");
    screen[4]->setSprite(37,"./Images/Frames/b038.png");
    screen[4]->setSprite(38,"./Images/Frames/b039.png");
    screen[4]->setSprite(39,"./Images/Frames/b040.png");
    screen[4]->setSprite(40,"./Images/Frames/b041.png");
    screen[4]->setSprite(41,"./Images/Frames/b042.png");
    screen[4]->setSprite(42,"./Images/Frames/b043.png");
    screen[4]->setSprite(43,"./Images/Frames/b044.png");
    screen[4]->setSprite(44,"./Images/Frames/b045.png");
    screen[4]->setSprite(45,"./Images/Frames/b046.png");
    screen[4]->setSprite(46,"./Images/Frames/b047.png");
    screen[4]->setSprite(47,"./Images/Frames/b048.png");
    screen[4]->setSprite(48,"./Images/Frames/b049.png");
    screen[4]->setSprite(49,"./Images/Frames/b050.png");
    screen[4]->setSprite(50,"./Images/Frames/b051.png");
    screen[4]->setSprite(51,"./Images/Frames/b052.png");
    screen[4]->setSprite(52,"./Images/Frames/b053.png");
    screen[4]->setSprite(53,"./Images/Frames/b054.png");
    screen[4]->setSprite(54,"./Images/Frames/b055.png");
    screen[4]->setSprite(55,"./Images/Frames/b056.png");
    screen[4]->setSprite(56,"./Images/Frames/b057.png");
    screen[4]->setSprite(57,"./Images/Frames/b058.png");
    screen[4]->setSprite(58,"./Images/Frames/b059.png");
    screen[4]->setSprite(59,"./Images/Frames/b060.png");
    screen[4]->setSprite(60,"./Images/Frames/b061.png");
    screen[4]->setSprite(61,"./Images/Frames/b062.png");
    screen[4]->setSprite(62,"./Images/Frames/b063.png");
    screen[4]->setSprite(63,"./Images/Frames/b064.png");
    screen[4]->setSprite(64,"./Images/Frames/b065.png");
    screen[4]->setSprite(65,"./Images/Frames/b066.png");
    screen[4]->setSprite(66,"./Images/Frames/b067.png");
    screen[4]->setSprite(67,"./Images/Frames/b068.png");
    screen[4]->setSprite(68,"./Images/Frames/b069.png");
    screen[4]->setSprite(69,"./Images/Frames/b070.png");
    screen[4]->setSprite(70,"./Images/Frames/b071.png");
    screen[4]->setSprite(71,"./Images/Frames/b072.png");
    screen[4]->setSprite(72,"./Images/Frames/b073.png");
    screen[4]->setSprite(73,"./Images/Frames/b074.png");
    screen[4]->setSprite(74,"./Images/Frames/b075.png");
    screen[4]->setSprite(75,"./Images/Frames/b076.png");
    screen[4]->setSprite(76,"./Images/Frames/b077.png");
    screen[4]->setSprite(77,"./Images/Frames/b078.png");
    screen[4]->setSprite(78,"./Images/Frames/b079.png");
    screen[4]->setSprite(79,"./Images/Frames/b080.png");
    screen[4]->setSprite(80,"./Images/Frames/b081.png");
    screen[4]->setSprite(81,"./Images/Frames/b082.png");
    screen[4]->setSprite(82,"./Images/Frames/b083.png");
    screen[4]->setSprite(83,"./Images/Frames/b084.png");
    screen[4]->setSprite(84,"./Images/Frames/b085.png");
    screen[4]->setSprite(85,"./Images/Frames/b086.png");
    screen[4]->setSprite(86,"./Images/Frames/b087.png");
    screen[4]->setSprite(87,"./Images/Frames/b088.png");
    screen[4]->setSprite(88,"./Images/Frames/b089.png");
    screen[4]->setSprite(89,"./Images/Frames/b090.png");
    screen[4]->setSprite(90,"./Images/Frames/b091.png");
    screen[4]->setSprite(91,"./Images/Frames/b092.png");
    screen[4]->setSprite(92,"./Images/Frames/b093.png");
    screen[4]->setSprite(93,"./Images/Frames/b094.png");
    screen[4]->setSprite(94,"./Images/Frames/b095.png");
    screen[4]->setSprite(95,"./Images/Frames/b096.png");
    screen[4]->setSprite(96,"./Images/Frames/b097.png");
    screen[4]->setSprite(97,"./Images/Frames/b098.png");
    screen[4]->setSprite(98,"./Images/Frames/b099.png");
    screen[4]->setSprite(99,"./Images/Frames/b100.png");


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
