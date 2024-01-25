#include <bits/stdc++.h>
#include <windows.h> 
#include <SFML/Graphics.hpp>
#include "Libraries/Registro.h"
#include "Libraries/Textbox.h"
#include "Libraries/Class.h"

using namespace std;
using namespace sf;

int main(){
    RenderWindow window(VideoMode(1280, 720), "Ajedrez", Style::Default);

    clsTextbox textbox1(15,Color::White,false);
    Font gameFont;
    gameFont.loadFromFile("./Fonts/04B_30__.TTF");
    textbox1.setFont(gameFont);
    textbox1.setPosition({100,100});

    ///////////////////////////////////////////////
    clsPeon peon1(1,1,'n');
    peon1.setSprite("./Images/Sprites/peon.png");

    Vector2f v1;
    v1.x = 10.1;
    v1.y = 10;

    Vector2f v2;
    v2.x = 20;
    v2.y = 30;

    Vector2f v3;
    v3.x = 10;
    v3.y = 10;
    bool a;
    a = v1==v2;
    cout<<a;
    a = v1==v3;
    cout<<a;
    while(window.isOpen()){
        Event event;

        while(window.pollEvent(event)){
            switch(event.type){
                case Event::Closed:
                    window.close();
                case Event::TextEntered:
                    textbox1.typedOn(event);
                case Event::KeyPressed:
                    if(event.key.code == Keyboard::Enter){
                        textbox1.setSelected(true);
                        cout<<"ga";
                    }
                    if(event.key.code == Keyboard::Escape){
                        textbox1.setSelected(false);
                    }
            }
            
        }

        window.clear();
            textbox1.drawTo(&window);
            window.draw(peon1.getSprite());
        window.display();
        
    }


    return 0;
}