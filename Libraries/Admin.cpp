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
    fonts[5].loadFromFile("./Fonts/font.TTF");

    effectBuffer[0].loadFromFile("./soundsEffects/snd_select.wav");
    effect[0].setBuffer(effectBuffer[0]);

    effectBuffer[1].loadFromFile("./soundsEffects/snd_pearrise.wav");
    effect[1].setBuffer(effectBuffer[1]);

    soundtrack[0].openFromFile("./Music/Home.ogg");
    soundtrack[1].openFromFile("./Music/Red.ogg");
    soundtrack[2].openFromFile("./Music/big_shot.ogg");
    soundtrack[0].play();
    soundtrack[0].setLoop(true);
    soundtrack[1].setLoop(true);
    soundtrack[2].setLoop(true);
    actualSoundtrack=0;

    //prueba de animacion por frames
    // AnimationSpriteShet.loadFromFile("./Images/PC Computer - Kaeru nyo Panyon - Cat.png");
    // Vector2i frameRectange(1,10);
    // Vector2i spriteSize(64,64);
    // am.addAnimation("Walking",AnimationSpriteShet,frameRectange,spriteSize);
    // am.setAnimationFrequency("Walking",4);
    

    // screen[4] = new clsScreen(window);
    screen[0] = new clsScreen(window, &clock);
    screen[0]->setSprite(0,"./Images/FramesC/1.jpg");
    // screen[0]->setTexture(0,"./Images/Frames/b0001.png");
    // screen[0]->setTexture(1,"./Images/Frames/b0002.png");
    // screen[0]->setTexture(2,"./Images/Frames/b0003.png");
    // screen[0]->setTexture(3,"./Images/Frames/b0004.png");
    // screen[0]->setTexture(4,"./Images/Frames/b0005.png");
    // screen[0]->setTexture(5,"./Images/Frames/b0006.png");
    // screen[0]->setTexture(6,"./Images/Frames/b0007.png");
    // screen[0]->setTexture(7,"./Images/Frames/b0008.png");
    // screen[0]->setTexture(8,"./Images/Frames/b0009.png");
    // screen[0]->setTexture(9,"./Images/Frames/b0010.png");
    // screen[0]->setTexture(10,"./Images/Frames/b0011.png");
    // screen[0]->setTexture(11,"./Images/Frames/b0012.png");
    // screen[0]->setTexture(12,"./Images/Frames/b0013.png");
    // screen[0]->setTexture(13,"./Images/Frames/b0014.png");
    // screen[0]->setTexture(14,"./Images/Frames/b0015.png");
    // screen[0]->setTexture(15,"./Images/Frames/b0016.png");
    // screen[0]->setTexture(16,"./Images/Frames/b0017.png");
    // screen[0]->setTexture(17,"./Images/Frames/b0018.png");
    // screen[0]->setTexture(18,"./Images/Frames/b0019.png");
    // screen[0]->setTexture(19,"./Images/Frames/b0020.png");
    // screen[0]->setTexture(20,"./Images/Frames/b0021.png");
    // screen[0]->setTexture(21,"./Images/Frames/b0022.png");
    // screen[0]->setTexture(22,"./Images/Frames/b0023.png");
    // screen[0]->setTexture(23,"./Images/Frames/b0024.png");
    // screen[0]->setTexture(24,"./Images/Frames/b0025.png");
    // screen[0]->setTexture(25,"./Images/Frames/b0026.png");
    // screen[0]->setTexture(26,"./Images/Frames/b0027.png");
    // screen[0]->setTexture(27,"./Images/Frames/b0028.png");
    // screen[0]->setTexture(28,"./Images/Frames/b0029.png");
    // screen[0]->setTexture(29,"./Images/Frames/b0030.png");
    // screen[0]->setTexture(30,"./Images/Frames/b0031.png");
    // screen[0]->setTexture(31,"./Images/Frames/b0032.png");
    // screen[0]->setTexture(32,"./Images/Frames/b0033.png");
    // screen[0]->setTexture(33,"./Images/Frames/b0034.png");
    // screen[0]->setTexture(34,"./Images/Frames/b0035.png");
    // screen[0]->setTexture(35,"./Images/Frames/b0036.png");
    // screen[0]->setTexture(36,"./Images/Frames/b0037.png");
    // screen[0]->setTexture(37,"./Images/Frames/b0038.png");
    // screen[0]->setTexture(38,"./Images/Frames/b0039.png");
    // screen[0]->setTexture(39,"./Images/Frames/b0040.png");
    // screen[0]->setTexture(40,"./Images/Frames/b0041.png");
    // screen[0]->setTexture(41,"./Images/Frames/b0042.png");
    // screen[0]->setTexture(42,"./Images/Frames/b0043.png");
    // screen[0]->setTexture(43,"./Images/Frames/b0044.png");
    // screen[0]->setTexture(44,"./Images/Frames/b0045.png");
    // screen[0]->setTexture(45,"./Images/Frames/b0046.png");
    // screen[0]->setTexture(46,"./Images/Frames/b0047.png");
    // screen[0]->setTexture(47,"./Images/Frames/b0048.png");
    // screen[0]->setTexture(48,"./Images/Frames/b0049.png");
    // screen[0]->setTexture(49,"./Images/Frames/b0050.png");
    // screen[0]->setTexture(50,"./Images/Frames/b0051.png");
    // screen[0]->setTexture(51,"./Images/Frames/b0052.png");
    // screen[0]->setTexture(52,"./Images/Frames/b0053.png");
    // screen[0]->setTexture(53,"./Images/Frames/b0054.png");
    // screen[0]->setTexture(54,"./Images/Frames/b0055.png");
    // screen[0]->setTexture(55,"./Images/Frames/b0056.png");
    // screen[0]->setTexture(56,"./Images/Frames/b0057.png");
    // screen[0]->setTexture(57,"./Images/Frames/b0058.png");
    // screen[0]->setTexture(58,"./Images/Frames/b0059.png");
    // screen[0]->setTexture(59,"./Images/Frames/b0060.png");
    // screen[0]->setTexture(60,"./Images/Frames/b0061.png");
    // screen[0]->setTexture(61,"./Images/Frames/b0062.png");
    // screen[0]->setTexture(62,"./Images/Frames/b0063.png");
    // screen[0]->setTexture(63,"./Images/Frames/b0064.png");
    // screen[0]->setTexture(64,"./Images/Frames/b0065.png");
    // screen[0]->setTexture(65,"./Images/Frames/b0066.png");
    // screen[0]->setTexture(66,"./Images/Frames/b0067.png");
    // screen[0]->setTexture(67,"./Images/Frames/b0068.png");
    // screen[0]->setTexture(68,"./Images/Frames/b0069.png");
    // screen[0]->setTexture(69,"./Images/Frames/b0070.png");
    // screen[0]->setTexture(70,"./Images/Frames/b0071.png");
    // screen[0]->setTexture(71,"./Images/Frames/b0072.png");
    // screen[0]->setTexture(72,"./Images/Frames/b0073.png");
    // screen[0]->setTexture(73,"./Images/Frames/b0074.png");
    // screen[0]->setTexture(74,"./Images/Frames/b0075.png");
    // screen[0]->setTexture(75,"./Images/Frames/b0076.png");
    // screen[0]->setTexture(76,"./Images/Frames/b0077.png");
    // screen[0]->setTexture(77,"./Images/Frames/b0078.png");
    // screen[0]->setTexture(78,"./Images/Frames/b0079.png");
    // screen[0]->setTexture(79,"./Images/Frames/b0080.png");
    // screen[0]->setTexture(80,"./Images/Frames/b0081.png");
    // screen[0]->setTexture(81,"./Images/Frames/b0082.png");
    // screen[0]->setTexture(82,"./Images/Frames/b0083.png");
    // screen[0]->setTexture(83,"./Images/Frames/b0084.png");
    // screen[0]->setTexture(84,"./Images/Frames/b0085.png");
    // screen[0]->setTexture(85,"./Images/Frames/b0086.png");
    // screen[0]->setTexture(86,"./Images/Frames/b0087.png");
    // screen[0]->setTexture(87,"./Images/Frames/b0088.png");
    // screen[0]->setTexture(88,"./Images/Frames/b0089.png");
    // screen[0]->setTexture(89,"./Images/Frames/b0090.png");
    // screen[0]->setTexture(90,"./Images/Frames/b0091.png");
    // screen[0]->setTexture(91,"./Images/Frames/b0092.png");
    // screen[0]->setTexture(92,"./Images/Frames/b0093.png");
    // screen[0]->setTexture(93,"./Images/Frames/b0094.png");
    // screen[0]->setTexture(94,"./Images/Frames/b0095.png");
    // screen[0]->setTexture(95,"./Images/Frames/b0096.png");
    // screen[0]->setTexture(96,"./Images/Frames/b0097.png");
    // screen[0]->setTexture(97,"./Images/Frames/b0098.png");
    // screen[0]->setTexture(98,"./Images/Frames/b0099.png");
    // screen[0]->setTexture(99,"./Images/Frames/b0100.png");
    // screen[0]->setTexture(0,"./Images/FramesH/1.jpg");
    // screen[0]->setTexture(1,"./Images/FramesH/2.jpg");
    // screen[0]->setTexture(2,"./Images/FramesH/3.jpg");
    // screen[0]->setTexture(3,"./Images/FramesH/4.jpg");
    // screen[0]->setTexture(4,"./Images/FramesH/5.jpg");
    // screen[0]->setTexture(5,"./Images/FramesH/6.jpg");
    // screen[0]->setTexture(6,"./Images/FramesH/7.jpg");
    // screen[0]->setTexture(7,"./Images/FramesH/8.jpg");
    // screen[0]->setTexture(8,"./Images/FramesH/9.jpg");
    // screen[0]->setTexture(9,"./Images/FramesH/10.jpg");
    // screen[0]->setTexture(10,"./Images/FramesH/11.jpg");
    // screen[0]->setTexture(11,"./Images/FramesH/12.jpg");
    // screen[0]->setTexture(12,"./Images/FramesH/13.jpg");
    // screen[0]->setTexture(13,"./Images/FramesH/14.jpg");
    // screen[0]->setTexture(14,"./Images/FramesH/15.jpg");
    // screen[0]->setTexture(15,"./Images/FramesH/16.jpg");
    // screen[0]->setTexture(16,"./Images/FramesH/17.jpg");
    // screen[0]->setTexture(17,"./Images/FramesH/18.jpg");
    // screen[0]->setTexture(18,"./Images/FramesH/19.jpg");
    
    screen[0]->setTexture(0,"./Images/FramesC/1.jpg");
    screen[0]->setTexture(1,"./Images/FramesC/2.jpg");
    screen[0]->setTexture(2,"./Images/FramesC/3.jpg");
    screen[0]->setTexture(3,"./Images/FramesC/4.jpg");
    screen[0]->setTexture(4,"./Images/FramesC/5.jpg");
    screen[0]->setTexture(5,"./Images/FramesC/6.jpg");
    screen[0]->setTexture(6,"./Images/FramesC/7.jpg");
    screen[0]->setTexture(7,"./Images/FramesC/8.jpg");
    screen[0]->setTexture(8,"./Images/FramesC/9.jpg");
    screen[0]->setTexture(9,"./Images/FramesC/10.jpg");
    screen[0]->setTexture(10,"./Images/FramesC/11.jpg");
    screen[0]->setTexture(11,"./Images/FramesC/12.jpg");
    screen[0]->setTexture(12,"./Images/FramesC/13.jpg");
    screen[0]->setTexture(13,"./Images/FramesC/14.jpg");
    screen[0]->setTexture(14,"./Images/FramesC/15.jpg");
    screen[0]->setTexture(15,"./Images/FramesC/16.jpg");
    screen[0]->setTexture(16,"./Images/FramesC/17.jpg");
    screen[0]->setTexture(17,"./Images/FramesC/18.jpg");
    screen[0]->setTexture(18,"./Images/FramesC/19.jpg");
    screen[0]->setTexture(19,"./Images/FramesC/20.jpg");
    screen[0]->setTexture(20,"./Images/FramesC/21.jpg");
    screen[0]->setTexture(21,"./Images/FramesC/22.jpg");
    screen[0]->setTexture(22,"./Images/FramesC/23.jpg");
    screen[0]->setTexture(23,"./Images/FramesC/24.jpg");
    screen[0]->setTexture(24,"./Images/FramesC/25.jpg");
    screen[0]->setTexture(25,"./Images/FramesC/26.jpg");



    screen[0]->setPosSprite(0,{0,0});
    screen[0]->setScaleSprite(0,{0.7,0.7});


    //Menu principal;
    
    //background
    // screen[0]->setSprite(0,"./Images/backgroundMenu.jpg");
    screen[0]->setText(0,&fonts[0],"CHESS",80,{100,200});
    //
    screen[0]->setText(1,&fonts[4],"Start Game",30,{100,400});
    screen[0]->setTextColor(1,Color::Yellow);
    screen[0]->setText(2,&fonts[4],"Settings",30,{100,500});
    screen[0]->setText(3,&fonts[4],"Quit",30,{100,600});
    
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
    screen[3] = new clsScreenPartida(window);
    screen[3]->setSprite(0,"./Images/gatito.png");
    screen[3]->setScaleSprite(0,{1.3,1.2});
    screen[3]->setText(0,&fonts[5],"Turn of: ",70,{700,100});
    screen[3]->setText(1,&fonts[5],"pepito",60,{700,200});
    reinterpret_cast <clsScreenPartida *> (screen[3]) -> setEffectSound(effect);
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
            screen[actualScreen]->update(0,25);            
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
    reinterpret_cast<clsScreenPartida *>(screen[3])->setUsuarios(n,b);
}

void clsAdmin::setSoundtrack(int i){
    soundtrack[actualSoundtrack].stop();
    soundtrack[i].play();

    actualSoundtrack = i;
}
