#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "Libraries/Class.h"

using namespace std;
using namespace sf;

int main(){
    RenderWindow window(VideoMode(1280, 720), "Ajedrez", Style::Default);
    // clsMenu menu(&window);
    
    // menu.menuPrincipal();
    
    clsAdmin main(&window);
    main.iniciarPartida();
    return 0;
}







