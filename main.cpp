#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window/VideoMode.hpp>

#include "Libraries/Class.h"

using namespace std;
using namespace sf;

int main(){
    VideoMode r;
    RenderWindow window(VideoMode(), "Ajedrez", Style::Fullscreen);

    

    // r=VideoMode::getDesktopMode();
    // unsigned int screenWidth = r.width;
    // unsigned int screenHeight = r.height;
    // window.create(VideoMode(screenWidth, screenHeight), "Ajedrez", Style::Fullscreen);


    // cout<<screenWidth<<" "<<screenHeight<<endl;



    window.setKeyRepeatEnabled(false);
 
    // menu.menuPrincipal();
    
    clsAdmin main(&window);
    
    // main.getWandH(screenWidth,screenHeight);
    main.iniciarPrograma();
    return 0;
}







