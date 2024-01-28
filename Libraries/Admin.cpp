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
    // screen[4] = new clsScreen(window);
    screen[0] = new clsScreen(window, &clock);
    screen[0]->setSprite(0,"./Images/Frames/b0001.png");
    screen[0]->setSprite(1,"./Images/Frames/b0002.png");
    screen[0]->setSprite(2,"./Images/Frames/b0003.png");
    screen[0]->setSprite(3,"./Images/Frames/b0004.png");
    screen[0]->setSprite(4,"./Images/Frames/b0005.png");
    screen[0]->setSprite(5,"./Images/Frames/b0006.png");
    screen[0]->setSprite(6,"./Images/Frames/b0007.png");
    screen[0]->setSprite(7,"./Images/Frames/b0008.png");
    screen[0]->setSprite(8,"./Images/Frames/b0009.png");
    screen[0]->setSprite(9,"./Images/Frames/b0010.png");
    screen[0]->setSprite(10,"./Images/Frames/b0011.png");
    screen[0]->setSprite(11,"./Images/Frames/b0012.png");
    screen[0]->setSprite(12,"./Images/Frames/b0013.png");
    screen[0]->setSprite(13,"./Images/Frames/b0014.png");
    screen[0]->setSprite(14,"./Images/Frames/b0015.png");
    screen[0]->setSprite(15,"./Images/Frames/b0016.png");
    screen[0]->setSprite(16,"./Images/Frames/b0017.png");
    screen[0]->setSprite(17,"./Images/Frames/b0018.png");
    screen[0]->setSprite(18,"./Images/Frames/b0019.png");
    screen[0]->setSprite(19,"./Images/Frames/b0020.png");
    screen[0]->setSprite(20,"./Images/Frames/b0021.png");
    screen[0]->setSprite(21,"./Images/Frames/b0022.png");
    screen[0]->setSprite(22,"./Images/Frames/b0023.png");
    screen[0]->setSprite(23,"./Images/Frames/b0024.png");
    screen[0]->setSprite(24,"./Images/Frames/b0025.png");
    screen[0]->setSprite(25,"./Images/Frames/b0026.png");
    screen[0]->setSprite(26,"./Images/Frames/b0027.png");
    screen[0]->setSprite(27,"./Images/Frames/b0028.png");
    screen[0]->setSprite(28,"./Images/Frames/b0029.png");
    screen[0]->setSprite(29,"./Images/Frames/b0030.png");
    screen[0]->setSprite(30,"./Images/Frames/b0031.png");
    screen[0]->setSprite(31,"./Images/Frames/b0032.png");
    screen[0]->setSprite(32,"./Images/Frames/b0033.png");
    screen[0]->setSprite(33,"./Images/Frames/b0034.png");
    screen[0]->setSprite(34,"./Images/Frames/b0035.png");
    screen[0]->setSprite(35,"./Images/Frames/b0036.png");
    screen[0]->setSprite(36,"./Images/Frames/b0037.png");
    screen[0]->setSprite(37,"./Images/Frames/b0038.png");
    screen[0]->setSprite(38,"./Images/Frames/b0039.png");
    screen[0]->setSprite(39,"./Images/Frames/b0040.png");
    screen[0]->setSprite(40,"./Images/Frames/b0041.png");
    screen[0]->setSprite(41,"./Images/Frames/b0042.png");
    screen[0]->setSprite(42,"./Images/Frames/b0043.png");
    screen[0]->setSprite(43,"./Images/Frames/b0044.png");
    screen[0]->setSprite(44,"./Images/Frames/b0045.png");
    screen[0]->setSprite(45,"./Images/Frames/b0046.png");
    screen[0]->setSprite(46,"./Images/Frames/b0047.png");
    screen[0]->setSprite(47,"./Images/Frames/b0048.png");
    screen[0]->setSprite(48,"./Images/Frames/b0049.png");
    screen[0]->setSprite(49,"./Images/Frames/b0050.png");
    screen[0]->setSprite(50,"./Images/Frames/b0051.png");
    screen[0]->setSprite(51,"./Images/Frames/b0052.png");
    screen[0]->setSprite(52,"./Images/Frames/b0053.png");
    screen[0]->setSprite(53,"./Images/Frames/b0054.png");
    screen[0]->setSprite(54,"./Images/Frames/b0055.png");
    screen[0]->setSprite(55,"./Images/Frames/b0056.png");
    screen[0]->setSprite(56,"./Images/Frames/b0057.png");
    screen[0]->setSprite(57,"./Images/Frames/b0058.png");
    screen[0]->setSprite(58,"./Images/Frames/b0059.png");
    screen[0]->setSprite(59,"./Images/Frames/b0060.png");
    screen[0]->setSprite(60,"./Images/Frames/b0061.png");
    screen[0]->setSprite(61,"./Images/Frames/b0062.png");
    screen[0]->setSprite(62,"./Images/Frames/b0063.png");
    screen[0]->setSprite(63,"./Images/Frames/b0064.png");
    screen[0]->setSprite(64,"./Images/Frames/b0065.png");
    screen[0]->setSprite(65,"./Images/Frames/b0066.png");
    screen[0]->setSprite(66,"./Images/Frames/b0067.png");
    screen[0]->setSprite(67,"./Images/Frames/b0068.png");
    screen[0]->setSprite(68,"./Images/Frames/b0069.png");
    screen[0]->setSprite(69,"./Images/Frames/b0070.png");
    screen[0]->setSprite(70,"./Images/Frames/b0071.png");
    screen[0]->setSprite(71,"./Images/Frames/b0072.png");
    screen[0]->setSprite(72,"./Images/Frames/b0073.png");
    screen[0]->setSprite(73,"./Images/Frames/b0074.png");
    screen[0]->setSprite(74,"./Images/Frames/b0075.png");
    screen[0]->setSprite(75,"./Images/Frames/b0076.png");
    screen[0]->setSprite(76,"./Images/Frames/b0077.png");
    screen[0]->setSprite(77,"./Images/Frames/b0078.png");
    screen[0]->setSprite(78,"./Images/Frames/b0079.png");
    screen[0]->setSprite(79,"./Images/Frames/b0080.png");
    screen[0]->setSprite(80,"./Images/Frames/b0081.png");
    screen[0]->setSprite(81,"./Images/Frames/b0082.png");
    screen[0]->setSprite(82,"./Images/Frames/b0083.png");
    screen[0]->setSprite(83,"./Images/Frames/b0084.png");
    screen[0]->setSprite(84,"./Images/Frames/b0085.png");
    screen[0]->setSprite(85,"./Images/Frames/b0086.png");
    screen[0]->setSprite(86,"./Images/Frames/b0087.png");
    screen[0]->setSprite(87,"./Images/Frames/b0088.png");
    screen[0]->setSprite(88,"./Images/Frames/b0089.png");
    screen[0]->setSprite(89,"./Images/Frames/b0090.png");
    screen[0]->setSprite(90,"./Images/Frames/b0091.png");
    screen[0]->setSprite(91,"./Images/Frames/b0092.png");
    screen[0]->setSprite(92,"./Images/Frames/b0093.png");
    screen[0]->setSprite(93,"./Images/Frames/b0094.png");
    screen[0]->setSprite(94,"./Images/Frames/b0095.png");
    screen[0]->setSprite(95,"./Images/Frames/b0096.png");
    screen[0]->setSprite(96,"./Images/Frames/b0097.png");
    screen[0]->setSprite(97,"./Images/Frames/b0098.png");
    screen[0]->setSprite(98,"./Images/Frames/b0099.png");
    screen[0]->setSprite(99,"./Images/Frames/b0100.png");

    for(int i=0;i<100;i++){
        screen[0]->setPosSprite(i,{0,0});
        screen[0]->setScaleSprite(i,{1.5,1.5});
    }

    //Menu principal;
    
    //background
    // screen[0]->setSprite(0,"./Images/backgroundMenu.jpg");
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
        if(actualScreen == 0){
            screen[actualScreen]->update(0,100);
        }
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
