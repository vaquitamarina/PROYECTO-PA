#include "Control.h"


clsControl::clsControl(clsScreen *m,int s, int mx, int mn,int o){
    menu = m;
    selected = s;
    max = mx;
    min = mn;
    op = o;
    in = false;
}
clsControl::clsControl(clsScreen *m,int s, int mx, int mn,int o,clsRegistro *regis, clsAdmin *a){
    menu = m;
    selected = s;
    max = mx;
    min = mn;
    op = o;
    in = false;
    registro = regis;
    admin = a;
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
                reinterpret_cast<clsScreenInSesion *> (menu)->setTextboxSelected(selected,false);
                selected--;
                if(selected == min - 1)
                {
                    selected = max;
                }
                reinterpret_cast<clsScreenInSesion *> (menu)->setTextboxSelected(selected,true);
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
        case 3:
            selected--;
            if(selected == min - 1)
            {
                selected = max;
            }
            reinterpret_cast<clsScreenPartida *> (menu)->setPointerPos(selected,'y');
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
                reinterpret_cast<clsScreenInSesion *> (menu)->setTextboxSelected(selected,false);
                selected++;
                if(selected == max + 1)
                {
                    selected = min;
                }
                reinterpret_cast<clsScreenInSesion *> (menu)->setTextboxSelected(selected,true);
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
        case 3:
            selected++;
            if(selected == max + 1)
            {
                selected = min;
            }
            reinterpret_cast<clsScreenPartida *> (menu)->setPointerPos(selected,'y');
            break;
    }

    
}
void clsControl::pressRight(){
    switch(op){
        case 3:
            selected++;
            if(selected == max + 1)
            {
                selected = min;
            }
            reinterpret_cast<clsScreenPartida *> (menu)->setPointerPos(selected,'x');
    }
}

void clsControl::pressLeft(){
    switch(op){
        case 3:
            selected--;
            if(selected == min - 1)
            {
                selected = max;
            }
            reinterpret_cast<clsScreenPartida *> (menu)->setPointerPos(selected,'x');

    }
}

void clsControl::pressEnter(int* actualScreen){
    switch(op){
        case 0:
            if(selected == 3){
                menu->closeWindow();
            }
            *actualScreen = selected;
            break;
        case 1: {
            if(in){
                //
                cout<<oldSelected<<endl;
                switch(oldSelected){
                    case 0:
                        if(cont == 0){
                            if(registro->iniciarSesion(reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(0),reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(1))){
                                //
                                cout<<"Se ha iniciado sesion correctamente";
                                usuarioN = reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(0);
                                reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(0);
                                reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(1);
                                reinterpret_cast <clsScreenInSesion *> (menu) -> setTextboxSelected(0,true);
                                reinterpret_cast <clsScreenInSesion *> (menu) -> setTextboxSelected(1,false);
                                cont ++;
                                selected = min;
                            }
                            else{
                                //
                                cout<<"No se pudo iniciar seison";
                            }
                        }
                        if(cont == 1){
                            if(registro->iniciarSesion(reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(0),reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(1))){
                                //
                                cout<<"Se ha iniciado sesion correctamente";
                                usuarioB = reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(0);
                                reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(0);
                                reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(1);
                                cont ++;
                                *actualScreen = 3;
                                admin->iniciarPartida(usuarioN,usuarioB);
                            }
                            else{
                                //
                                cout<<"No se pudo iniciar seison";
                            }
                        }
                        
                        break;
                    case 1:
                        if(registro->crearUsuario(reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(0),reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(1),0)){
                            reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(0);
                            reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(1);    
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
                reinterpret_cast < clsScreenInSesion *> (menu) -> setTextboxColor(0,Color(255,255,255,255),true);
                reinterpret_cast < clsScreenInSesion *> (menu) -> setTextboxColor(1,Color(255,255,255,255),false);
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
                reinterpret_cast < clsScreenInSesion *> (menu) -> setTextboxColor(0,Color(255,255,255,0),false);
                reinterpret_cast < clsScreenInSesion *> (menu) -> setTextboxColor(1,Color(255,255,255,0),false);
                reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(0);
                reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(1);
                in = false;
                
            }
            else{
                *actualScreen = 0;
                in = false;

            }
            break;
        case 2:
            *actualScreen = 0;
            break;
    }
}
