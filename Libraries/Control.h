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
}

void clsControl::pressUp(){
    
    menu->setTextColor(selected, Color::White);
    selected--;
    if(selected == min - 1)
    {
        selected = max;
    }
    menu->setTextColor(selected, Color::Yellow);
}

void clsControl::pressDown(){
    menu->setTextColor(selected, Color::White);
    selected++;
    if(selected == max + 1)
    {
        selected = min;
    }
    menu->setTextColor(selected, Color::Yellow);
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
    } 
    
}

void clsControl::pressEscape(int* actualScreen){
    switch (op) {
        case 1:
            *actualScreen = 0;
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