#include "Control.h"


clsControl::clsControl(clsScreen *m,int s, int mx, int mn,int o){
    menu = m;
    selected = s;
    max = mx;
    min = mn;
    op = o;
    in = false;
}
clsControl::clsControl(clsScreen *m,int s, int mx, int mn,int o, clsAdmin *a){
    menu = m;
    selected = s;
    max = mx;
    min = mn;
    op = o;
    in = false;
    admin = a;
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
        case 2:
            oldSelected++;
            if(oldSelected == max + 1)
            {
                oldSelected = min;
            }
            menu->setTextureinSprite(1,oldSelected);
            admin->setSoundtrackVolume(oldSelected+1,0);
            admin->setSoundtrackVolume(oldSelected+1,1);
            admin->setSoundtrackVolume(oldSelected+1,2);
        break;        
        case 3:{
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
        break;}
        case 4:{
            oldSelected++;
            if(oldSelected == max + 1)
            {
                oldSelected = min;
            }
            menu->setTextureinSprite(1,oldSelected+100);
            cout<<oldSelected;
        break;}
    }
}

void clsControl::pressLeft(){
    switch(op){
        case 2:
            oldSelected--;
            if(oldSelected == min - 1)
            {
                oldSelected = max;
            }
            menu->setTextureinSprite(1,oldSelected);
            menu->setTextureinSprite(1,oldSelected);
            admin->setSoundtrackVolume(oldSelected+1,0);
            admin->setSoundtrackVolume(oldSelected+1,1);
            admin->setSoundtrackVolume(oldSelected+1,2);
        break;
        case 3:{
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
        break;}
        case 4:{
            oldSelected--;
            if(oldSelected == min - 1)
            {
                oldSelected = max;
            }
            menu->setTextureinSprite(1,oldSelected+100);
            cout<<oldSelected;
        break;}
    }
}

void clsControl::pressEnter(int* actualScreen){ 
    switch(op){
        case 0:
            if(selected == 4){
                menu->closeWindow();
            }
            switch(selected){
                case 1:
                    *actualScreen = 1;
                    break;
                case 2:
                    admin->setRanking();
                    *actualScreen = 5;
                    break;
                case 3:
                    *actualScreen = 2;
            }
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
                            selected = 0;
                            if(registro->iniciarSesion(reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(0),reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(1))){
                                //
                                // cout<<"Se ha iniciado sesion correctamente";
                                usuarioB = reinterpret_cast<clsScreenInSesion *>(menu)->getTextbox(0);
                                // reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(0);
                                // reinterpret_cast <clsScreenInSesion *> (menu) -> deleteTextboxString(1);
                                // cont ++;
                                *actualScreen = 3;
                                admin->setSoundtrack(1);
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
                    default:
                        break;
                }
            }
            else{
                menu->setTextColor(0,Color(255,255,255,0));
                menu->setTextColor(1,Color(255,255,255,0));
                menu->setTextColor(3,Color(255,255,255,255));
                menu->setTextColor(4,Color(255,255,255,255));
                reinterpret_cast < clsScreenInSesion *> (menu) -> setTextboxColor(0,Color(255,255,255,255),true);
                reinterpret_cast < clsScreenInSesion *> (menu) -> setTextboxColor(1,Color(255,255,255,255),false);
                oldSelected = selected;
        
                in = true;

            }
            break;

        case 3: {
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
                    // reinterpret_cast<clsScreenPartida *>(menu)->imprimirMatrizPrueba();
                    if(reinterpret_cast<clsScreenPartida *>(menu)->getTestMovement(origin,piezaLevantada)){
                        cent = false;
                        // reinterpret_cast<clsScreenPartida *>(menu)->comprobarGanador(piezaLevantada);
                    
                        reinterpret_cast < clsScreenPartida *> (menu)->setPiezaPos({origin.x,origin.y-10},{origin.x,origin.y},2);
                        reinterpret_cast<clsScreenPartida *>(menu)->TurnPlayer();
                        // cout<< reinterpret_cast<clsScreenPartida * >(menu)->getTurn();
                    }
                }
                else{
                    bool expiratorio = false;
                    if(reinterpret_cast<clsScreenPartida *>(menu)->getTestEat(origin,piezaLevantada) && reinterpret_cast<clsScreenPartida *>(menu)->getPiezaColor(piezaLevantada) != reinterpret_cast<clsScreenPartida *>(menu)->getPiezaColor(piezaPuntero)){
                        cent = false;
                        admin->playSound(1);
                        int dlt = reinterpret_cast<clsScreenPartida *>(menu)->getCasillaPieza(origin);
                        reinterpret_cast<clsScreenPartida *>(menu)->deletePieza(dlt);
                        // reinterpret_cast<clsScreenPartida *>(menu)->comprobarGanador(piezaLevantada);
                        reinterpret_cast < clsScreenPartida *> (menu)->setPiezaPos({origin.x,origin.y-10},{origin.x,origin.y},2);
                        reinterpret_cast<clsScreenPartida *>(menu)->TurnPlayer();

                    }
                }
                if(reinterpret_cast<clsScreenPartida *>(menu)->getWin()){
                    *actualScreen = 4;
                    admin->stopSountrack(1);
                    admin->playSound(2);
                    admin->setSoundtrackAfter(3,10.);
                    if(reinterpret_cast<clsScreenPartida *>(menu)->getTurn() == true){
                        admin->setUsuarioMmr(reinterpret_cast<clsScreenPartida *>(menu)->getUsuarioB(),-30);
                        admin->setUsuarioMmr(reinterpret_cast<clsScreenPartida *>(menu)->getUsuarioN(),30);
                        admin->setStrinMain(4,0,"BLACK WINS");
                        admin->setStrinMain(4,1,reinterpret_cast<clsScreenPartida *>(menu)->getUsuarioN()+" WINNER  +30");
                        admin->setStrinMain(4,2,reinterpret_cast<clsScreenPartida *>(menu)->getUsuarioB()+" LOSER   -30");
                    }
                    else{
                        admin->setUsuarioMmr(reinterpret_cast<clsScreenPartida *>(menu)->getUsuarioB(),30);
                        admin->setUsuarioMmr(reinterpret_cast<clsScreenPartida *>(menu)->getUsuarioN(),-30);
                        admin->setStrinMain(4,0,"WHITE WINS");
                        admin->setStrinMain(4,1,reinterpret_cast<clsScreenPartida *>(menu)->getUsuarioB()+" WINNER  +30");
                        admin->setStrinMain(4,2,reinterpret_cast<clsScreenPartida *>(menu)->getUsuarioN()+" LOSER   -30");

                    }
                    registro->generarRanking();
                }
            }   
            
            break;}
        case 4:
            admin->reiniciarPiezas();
            if(oldSelected == 0){
                *actualScreen = 0;
            }
            else {
                *actualScreen = 3;
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
                menu->setTextColor(3,Color(255,255,255,0));
                menu->setTextColor(4,Color(255,255,255,0));
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
        case 5:
            *actualScreen = 0;
            break;
    }
}
