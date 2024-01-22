#include "MenuInSesion.h"

clsMenuInicioSesion::clsMenuInicioSesion(RenderWindow *w,Font *f) : clsMenu(w){
    this->setTextbox(f);
}
void clsMenuInicioSesion::setTextbox(Font *f){
    textbox[0] = new clsTextbox(20,Color(255,255,255,0),false);
    textbox[1] = new clsTextbox(20,Color(255,255,255,0),false);

    textbox[0]->setFont(*f);
    textbox[1]->setFont(*f);

    textbox[0]->setPosition({400,300});
    textbox[1]->setPosition({400,400});

    textbox[0]->setLimit(true,10);
    textbox[1]->setLimit(true,10);
}

void clsMenuInicioSesion::setTextboxColor(int i,Color c, bool sel){
    textbox[i]->setColor(c);
    textbox[i]->setSelected(sel);
    
}

void clsMenuInicioSesion::typedOn(Event event){
    textbox[0]->typedOn(event);
    textbox[1]->typedOn(event);
}

void clsMenuInicioSesion::setTextboxSelected(int i, bool sel){
    textbox[i]->setSelected(sel);
}

void clsMenuInicioSesion::deleteTextboxString(int i){
    textbox[i]->deleteString();
}

string clsMenuInicioSesion::getTextbox(int i){
    return textbox[i]->getText();
}