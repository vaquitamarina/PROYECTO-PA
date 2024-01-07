#include <bits/stdc++.h>
#include <windows.h> 
#include <SFML/Graphics.hpp>

#include "Libraries/Textbox.h"

using namespace std;
using namespace sf;

int main(){
    RenderWindow window(VideoMode(1280, 720), "Ajedrez", Style::Default);

    clsTextbox textbox1(15,Color::White,true);
    Font gameFont;
    gameFont.loadFromFile("./Fonts/04B_30__.TTF");
    textbox1.setFont(gameFont);
    textbox1.setPosition({100,100});

    while(window.isOpen()){
        Event event;

        while(window.pollEvent(event)){
            switch(event.type){
                case Event::Closed:
                    window.close();
                case Event::TextEntered:
                    textbox1.typedOn(event);
            }
        }

        window.clear();
            textbox1.drawTo(&window);
        window.display();
        
    }


    return 0;
}