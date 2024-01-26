#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "Libraries/Class.h"

using namespace std;
using namespace sf;

int main(){
    RenderWindow window(VideoMode(), "Ajedrez", Style::Fullscreen);
    window.setKeyRepeatEnabled(false);
    // clsMenu menu(&window);
    
    // menu.menuPrincipal();
    
    clsAdmin main(&window);
    main.iniciarPrograma();
    return 0;
}







