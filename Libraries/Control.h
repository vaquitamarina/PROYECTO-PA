#include <bits/stdc++.h>

using namespace std;
using namespace sf;   

class clsControl{
    private:
        clsMenu *menu;
        int selected;
        int max;
        int min;
    public:
        clsControl(clsMenu *,int,int,int);
        void pressUp();
        void pressDown();
        void pressEnter(int *);
};

clsControl::clsControl(clsMenu *m,int s, int mx, int mn){
    menu = m;
    selected = s;
    max = mx;
    min = mn;
}

void clsControl::pressUp(){
    menu->setTextColor(selected, Color::White);
    selected--;
    if(selected == 0)
    {
        selected = 3;
    }
    menu->setTextColor(selected, Color::Yellow);
}

void clsControl::pressDown(){
    menu->setTextColor(selected, Color::White);
    selected++;
    if(selected == 4)
    {
        selected = 1;
    }
    menu->setTextColor(selected, Color::Yellow);
} 

// void clsControl::pressEnter(int *actualScreen){
//     actualScreen = 1;
// }
