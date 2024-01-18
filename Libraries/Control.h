#include <bits/stdc++.h>

using namespace std;
using namespace sf;   

class clsControl{
    protected:
        clsMenu *menu;
        int selected;
        int max;
        int min;
        int op;
        bool in;
    public:
        clsControl(clsMenu *,int,int,int,int);
        void pressUp();
        void pressDown();
        void pressEnter(int* a);
        void pressEscape(int* a);
};

clsControl::clsControl(clsMenu *m,int s, int mx, int mn,int o){
    menu = m;
    selected = s;
    max = mx;
    min = mn;
    op = o;
    in = false;
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
        case 1:
            menu->setTextColor(0,Color(255,255,255,0));
            menu->setTextColor(1,Color(255,255,255,0));
            reinterpret_cast < clsMenuInicioSesion *> (menu) -> setTextboxColor(0,Color(255,255,255,255),true);
            reinterpret_cast < clsMenuInicioSesion *> (menu) -> setTextboxColor(1,Color(255,255,255,255),true);
            reinterpret_cast < clsMenuInicioSesion *> (menu) -> setTextboxSelected(1,false);
            in = true;
    } 
    
}

void clsControl::pressEscape(int* actualScreen){
    switch (op) {
        case 1:
            *actualScreen = 0;
            menu->setTextColor(0,Color(255,255,255,255));
            menu->setTextColor(1,Color(255,255,255,255));
            reinterpret_cast < clsMenuInicioSesion *> (menu) -> setTextboxColor(0,Color(255,255,255,0),false);
            reinterpret_cast < clsMenuInicioSesion *> (menu) -> setTextboxColor(1,Color(255,255,255,0),false);
            in = false;
            break;
    }
}



// class clsControlInicioS : public clsControl{
//     private:
 
//     public:
//         clsControlInicioS(clsMenu *,int,int,int,int);
//         void pressEnter(int* actualScreen);
// };

// clsControlInicioS::clsControlInicioS(clsMenu *m,int s, int mx, int mn,int o) : clsControl(m,s,mx,mn,o){
    
// }

// void clsControlInicioS::pressEnter(int* actualScreen){
//     cout<<"ga";
//     switch(selected){
//         case 0:
//             menuInicio->setTextColor(0,Color(255,255,255,0));
//             menuInicio->setTextColor(1,Color(255,255,255,0));
//             menuInicio->setTextboxColor(0,Color(255,255,255,255));
//             menuInicio->setTextboxColor(1,Color(255,255,255,255));
//     } 
// }