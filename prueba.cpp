#include <bits/stdc++.h>
#include <windows.h> 
#include <SFML/Graphics.hpp>
#include "Libraries/Registro.h"
#include "Libraries/Textbox.h"
#include "Libraries/Class.h"
#include "Libraries/Usuario.h"

using namespace std;
using namespace sf;

int main(){
    RenderWindow window(VideoMode(1280, 720), "Ajedrez", Style::Default);
    Music xd;
    Clock clock;
    xd.openFromFile("Resources/Soundtrack/PaperPlease.ogg");
    // clsUsuario a[10];

    // a[0].setNombre("will");
    // a[0].setMmr(20);

    // a[1].setNombre("vaq");
    // a[1].setMmr(200);

    // a[2].setPasswd("rus");
    // a[2].setMmr(3);
    // clsUsuario aux;
    // for(int i = 0; i < 3; i++)
    //     for(int j = 0; j < 3-i; j++)
    //         if(a[j] > a[j+1]){
    //             aux = a[j];
    //             a[j] = a[j+1];
    //             a[j+1] = aux;
    //         }

    // for(int i =0;i<3;i++){
    //     cout<<a[i].getMmr();
    // }

    if(clock.getElapsedTime().asSeconds() > 10)
    {
        xd.play();
        clock.restart();
    }

    while(window.isOpen()){
        Event event;
        
        while(window.pollEvent(event)){

            if(event.type == Event ::Closed){
                window.close();
            }
        }

        window.clear();
        window.display();
        
    }


    return 0;
}