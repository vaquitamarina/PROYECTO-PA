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
    
    Clock reloj;

<<<<<<< Updated upstream
    clsTextbox textbox1(15,Color::White,false);
    Font gameFont;
    gameFont.loadFromFile("./Fonts/04B_30__.TTF");
    textbox1.setFont(gameFont);
    textbox1.setPosition({100,100});
    Texture a;
    Sprite sp;
    a.loadFromFile("");
    sp.setTexture(a);
=======
    Texture ga;
    ga.loadFromFile("./Images/gatito.png");
    Sprite abnormal(ga);   

    // clsTextbox textbox1(15,Color::White,false);
    // Font gameFont;
    // gameFont.loadFromFile("./Fonts/04B_30__.TTF");
    // textbox1.setFont(gameFont);
    // textbox1.setPosition({100,100});
>>>>>>> Stashed changes

    ///////////////////////////////////////////////
    // Vector2f v1;
    // v1.x = 10.1;
    // v1.y = 10;

    // Vector2f v2;
    // v2.x = 20;
    // v2.y = 30;

    // Vector2f v3;
    // v3.x = 10;
    // v3.y = 10;
    // bool a;
    // a = v1==v2;
    // cout<<a;
    // a = v1==v3;
    // cout<<a;

    int alfa=255;
    int a = false;
    cout<<a;
    while(window.isOpen()){
        Event event;
<<<<<<< Updated upstream
        
=======
        if(alfa>0)
        {
        if(reloj.getElapsedTime().asSeconds() > 0.5f)
        {
            abnormal.setColor(Color(255,255,255,alfa));
            alfa=alfa-10;
            reloj.restart();
        }
        }
>>>>>>> Stashed changes
        while(window.pollEvent(event)){

            if(event.type == Event ::Closed){
                window.close();
            }
        }

        window.clear();
            window.draw(abnormal);
        window.display();
        
    }


    return 0;
}