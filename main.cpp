#include <bits/stdc++.h>
#include <windows.h> 
#include <SFML/Graphics.hpp>
#include "Libraries/Textbox.h"

#include "Libraries/extra.h"
#include "Libraries/Usuario.h"
#include "Libraries/Pieza.h"
#include "Libraries/Tablero.h"
#include <SFML/Audio.hpp>
#include "Libraries/Registro.h"

#include "Libraries/Partida.h"
#include "Libraries/Menu.h"
#include "Libraries/Control.h"

#include "Libraries/Screen.h"

using namespace std;
using namespace sf;

int main(){
    RenderWindow window(VideoMode(1280, 720), "Ajedrez", Style::Default);
    // clsMenu menu(&window);
    
    // menu.menuPrincipal();
    
    clsActualScreen main(&window);
    main.iniciarPartida();
    return 0;
}







