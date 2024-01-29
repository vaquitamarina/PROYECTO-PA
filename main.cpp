#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window/VideoMode.hpp>

#include "Libraries/Class.h"

using namespace std;
using namespace sf;

int main(){
    VideoMode r;
    RenderWindow window;
    
    r=VideoMode::getDesktopMode();
    unsigned int screenWidth = r.width;
    unsigned int screenHeight = r.height;
    window.create(VideoMode(screenWidth, screenHeight), "Ajedrez", Style::Fullscreen);
    window.setKeyRepeatEnabled(false);
    // clsMenu menu(&window);
    
    // menu.menuPrincipal();
    
    clsAdmin main(&window);
    main.iniciarPrograma();
    return 0;
}







