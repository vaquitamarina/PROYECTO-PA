#include "Control.h"


clsControl::clsControl(clsMenu *m,int s, int mx, int mn,int o){
    menu = m;
    selected = s;
    max = mx;
    min = mn;
    op = o;
    in = false;
}
clsControl::clsControl(clsMenu *m,int s, int mx, int mn,int o,clsRegistro *regis){
    menu = m;
    selected = s;
    max = mx;
    min = mn;
    op = o;
    in = false;
    registro = regis;
}
void clsControl::pressUp(){
    switch (op) {
        case 0:
            menu->setTextColor(selected, Color::White);
            selected--;
            if(selected == min - 1)
            {
                selected = max;
            }
            menu->setTextColor(selected, Color::Yellow);
            break;
        case 1:
            if(in){
                reinterpret_cast<clsMenuInicioSesion *> (menu)->setTextboxSelected(selected,false);
                selected--;
                if(selected == min - 1)
                {
                    selected = max;
                }
                reinterpret_cast<clsMenuInicioSesion *> (menu)->setTextboxSelected(selected,true);
            }
            else{
                menu->setTextColor(selected, Color::White);
                selected--;
                if(selected == min - 1)
                {
                    selected = max;
                }
                menu->setTextColor(selected, Color::Yellow);
            }
            break;
        }
    
}

void clsControl::pressDown(){
    switch(op){
        case 0:
            menu->setTextColor(selected, Color::White);
            selected++;
            if(selected == max + 1)
            {
                selected = min;
            }
            menu->setTextColor(selected, Color::Yellow);
            break;
        case 1:
            if(in){
                reinterpret_cast<clsMenuInicioSesion *> (menu)->setTextboxSelected(selected,false);
                selected++;
                if(selected == max + 1)
                {
                    selected = min;
                }
                reinterpret_cast<clsMenuInicioSesion *> (menu)->setTextboxSelected(selected,true);
            }
            else{
                menu->setTextColor(selected, Color::White);
                selected++;
                if(selected == max + 1)
                {
                    selected = min;
                }
                menu->setTextColor(selected, Color::Yellow);
            }
            break;
    }

    
} 

void clsControl::pressEnter(int* actualScreen){
    switch(op){
        case 0:
            *actualScreen = selected;
            break;
        case 1: {
            
            if(in){
                switch(oldSelected){
                    case 0:

                        break;
                    case 1:
                        if(registro->crearUsuario(reinterpret_cast<clsMenuInicioSesion *>(menu)->getTextbox(0),reinterpret_cast<clsMenuInicioSesion *>(menu)->getTextbox(1),0)){
                            reinterpret_cast <clsMenuInicioSesion *> (menu) -> deleteTextboxString(0);
                            reinterpret_cast <clsMenuInicioSesion *> (menu) -> deleteTextboxString(1);    
                        }
                        else{
                            //Aqui hay que hacer que aparezca un texto indicando esto en el programa, el cout es provisinal ga
                            cout<<"Este nombre ya ha sido registrado";
                        }
                        break;
                }
            }
            else{
                menu->setTextColor(0,Color(255,255,255,0));
                menu->setTextColor(1,Color(255,255,255,0));
                reinterpret_cast < clsMenuInicioSesion *> (menu) -> setTextboxColor(0,Color(255,255,255,255),true);
                reinterpret_cast < clsMenuInicioSesion *> (menu) -> setTextboxColor(1,Color(255,255,255,255),false);
                oldSelected = selected;
        
                in = true;

            }
        }
    } 
    
}

void clsControl::pressEscape(int* actualScreen){
    switch (op) {
        case 1:
            if(in){
                menu->setTextColor(0,Color::Yellow);
                menu->setTextColor(1,Color::White);
                reinterpret_cast < clsMenuInicioSesion *> (menu) -> setTextboxColor(0,Color(255,255,255,0),false);
                reinterpret_cast < clsMenuInicioSesion *> (menu) -> setTextboxColor(1,Color(255,255,255,0),false);
                reinterpret_cast <clsMenuInicioSesion *> (menu) -> deleteTextboxString(0);
                reinterpret_cast <clsMenuInicioSesion *> (menu) -> deleteTextboxString(1);
                in = false;
                
            }
            else{
                *actualScreen = 0;
                in = false;

            }
            
            break;
    }
}
