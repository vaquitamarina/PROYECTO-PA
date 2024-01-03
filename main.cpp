#include <bits/stdc++.h>
#include <windows.h> 
#include <SFML/Graphics.hpp>
#include "Libraries/extra.h"
#include "Libraries/Usuario.h"
#include "Libraries/Pieza.h"
#include "Libraries/Tablero.h"
#include <SFML/Audio.hpp>


#include "Libraries/Partida.h"
#include "Libraries/Menu.h"


using namespace std;

int main(){
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Ajedrez", sf::Style::Titlebar | sf::Style::Close);
    clsMenu menu(&window);
    
    menu.menuPrincipal();
        

    return 0;
}







