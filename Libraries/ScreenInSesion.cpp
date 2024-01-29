#include "ScreenInSesion.h"

clsScreenInSesion::clsScreenInSesion(RenderWindow *w,Font *f) : clsScreen(w){
    this->setTextbox(f);
}
void clsScreenInSesion::setTextbox(Font *f){
    textbox[0] = new clsTextbox(30,Color(255,255,255,0),false);
    textbox[1] = new clsTextbox(30,Color(255,255,255,0),false);

    textbox[0]->setFont(*f);
    textbox[1]->setFont(*f);

    textbox[0]->setPosition({350,400});
    textbox[1]->setPosition({350,500});

    textbox[0]->setLimit(true,10);
    textbox[1]->setLimit(true,10);
}

void clsScreenInSesion::setTextboxColor(int i,Color c, bool sel){
    textbox[i]->setColor(c);
    textbox[i]->setSelected(sel);
    
}

void clsScreenInSesion::typedOn(Event event){
    textbox[0]->typedOn(event);
    textbox[1]->typedOn(event);
}

void clsScreenInSesion::setTextboxSelected(int i, bool sel){
    textbox[i]->setSelected(sel);
}

void clsScreenInSesion::deleteTextboxString(int i){
    textbox[i]->deleteString();
}

string clsScreenInSesion::getTextbox(int i){
    return textbox[i]->getText();
}