#include <bits/stdc++.h>
#include <windows.h> 
#include <SFML/Graphics.hpp>
#include "Libraries/extra.h"
#include "Libraries/Usuario.h"
#include "Libraries/Pieza.h"
#include "Libraries/Tablero.h"


#include "Libraries/Partida.h"
#include "Libraries/Menu.h"


using namespace std;

int main(){
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Ajedrez");
    //font
    sf::Font gameFont;
    gameFont.loadFromFile("./Fonts/04B_30__.TTF");


    //background
    sf::Texture tbackground;
    tbackground.loadFromFile("./Images/background.png");
    sf::Sprite background(tbackground);


    sf::Text text;
    text.setFont(gameFont);
    text.setString("Bienvenido a la plataforma...");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event ::Closed)
                window.close();
        }
    
        window.clear();
            window.draw(background);
            window.draw(text);
        window.display();
    }

    return 0;
}







