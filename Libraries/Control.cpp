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
            Vector2f origin(menu->getPosSprite(1));

            reinterpret_cast<clsScreenPartida *> (menu)->setPointerPos(selected,'y');
            if(cent){
                reinterpret_cast<clsScreenPartida *> (menu)->setPiezaPos({origin.x,origin.y-10}, {menu->getPosSprite(1).x,menu->getPosSprite(1).y-10},false);
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
                Vector2f origin(menu->getPosSprite(1));

                reinterpret_cast<clsScreenPartida *> (menu)->setPointerPos(selected,'y');
                if(cent){
                    reinterpret_cast<clsScreenPartida *> (menu)->setPiezaPos({origin.x,origin.y-10}, {menu->getPosSprite(1).x,menu->getPosSprite(1).y-10},false);
                }
            break;
    }

    
}
void clsControl::pressRight(){
    switch(op){
        case 3:
            oldSelected++;
            if(oldSelected == max + 1)
            {
                oldSelected = min;
            }
            Vector2f origin(menu->getPosSprite(1));

            reinterpret_cast<clsScreenPartida *> (menu)->setPointerPos(oldSelected,'x');

            if(cent){
                reinterpret_cast<clsScreenPartida *> (menu)->setPiezaPos({origin.x,origin.y-10}, {menu->getPosSprite(1).x,menu->getPosSprite(1).y-10},false);
            }
    }
}

void clsControl::pressLeft(){
    switch(op){
        case 3:
            oldSelected--;
            if(oldSelected == min - 1)
            {
                oldSelected = max;
            }
            Vector2f origin(menu->getPosSprite(1));

            reinterpret_cast<clsScreenPartida *> (menu)->setPointerPos(oldSelected,'x');

            if(cent){
                reinterpret_cast<clsScreenPartida *> (menu)->setPiezaPos({origin.x,origin.y-10}, {menu->getPosSprite(1).x,menu->getPosSprite(1).y-10},false);
            }
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
        case 1: 
            if(in){
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
                                // cout<<"Se ha iniciado sesion correctamente";
                                usuarioB = reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(0);
                                // reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(0);
                                // reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(1);
                                // cont ++;
                                *actualScreen = 3;
                                admin->setSoundtrack(1);
                                //admin->iniciarPartida(usuarioN,usuarioB);
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
                    default:
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
            break;

        case 3:
            Vector2f origin(menu->getPosSprite(1));
            int piezaPuntero = reinterpret_cast<clsScreenPartida *>(menu)->getCasillaPieza(origin);
            int piezaLevantada = reinterpret_cast<clsScreenPartida *>(menu)->getCasillaPieza({origin.x,origin.y-10});
            if(!cent){
                if(piezaPuntero != -1){
                    if(reinterpret_cast<clsScreenPartida *>(menu)->getTurn() == true && reinterpret_cast<clsScreenPartida *>(menu)->getPiezaColor(piezaPuntero) == 'b'){
                        reinterpret_cast<clsScreenPartida *>(menu)->setPriority(origin);
                        cent = true;
                        reinterpret_cast < clsScreenPartida *> (menu)->setPiezaPos(origin,{origin.x,origin.y-10},1);
                    }
                    if(reinterpret_cast<clsScreenPartida *>(menu)->getTurn() == false && reinterpret_cast<clsScreenPartida *>(menu)->getPiezaColor(piezaPuntero) == 'n'){
                        reinterpret_cast<clsScreenPartida *>(menu)->setPriority(origin);
                        cent = true;
                        reinterpret_cast < clsScreenPartida *> (menu)->setPiezaPos(origin,{origin.x,origin.y-10},1);
                    }
                }
            
            }
            else{
                if(piezaPuntero == -1){
                    reinterpret_cast<clsScreenPartida *>(menu)->imprimirMatrizPrueba();
                    if(reinterpret_cast<clsScreenPartida *>(menu)->getTestMovement(origin,piezaLevantada)){
                        cent = false;
                        reinterpret_cast<clsScreenPartida *>(menu)->comprobarGanador(piezaLevantada);
                    
                        reinterpret_cast < clsScreenPartida *> (menu)->setPiezaPos({origin.x,origin.y-10},{origin.x,origin.y},2);
                        reinterpret_cast<clsScreenPartida *>(menu)->TurnPlayer();
                        // cout<< reinterpret_cast<clsScreenPartida * >(menu)->getTurn();
                    }
                }
            }
            
            break;

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
