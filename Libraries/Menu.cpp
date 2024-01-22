#include "Menu.h"
clsMenu::clsMenu(RenderWindow *w){
    window = w;
    textbox[0] = new clsTextbox(0,Color(0,0,0,0),false);
    textbox[1] = new clsTextbox(0,Color(0,0,0,0),false);
}


void clsMenu::setSprite(int n,string b){
    Image image;
    image.loadFromFile(b);
    
    textures[n].loadFromImage(image);
    sprites[n] = new Sprite(textures[n]);
}
void clsMenu::setScaleSprite(int i, Vector2f scale){
    sprites[i]->setScale(scale);
}
void clsMenu::setSpriteOpacity(int i, int a){
    sprites[i]->setColor(Color(255,255,255,a));
}


void clsMenu::setText(int i,Font *f, string s, int c, Vector2f pos){
    
    text[i].setFont(*f);
    text[i].setString(s);
    text[i].setCharacterSize(c);
    text[i].setPosition(pos); 
}

void clsMenu::setTextColor(int i, Color color){
    text[i].setColor(color);
}

void clsMenu::draw(){
    window->draw(*sprites[0]);
    window->draw(text[0]);
    window->draw(text[1]);
    window->draw(text[2]);
    window->draw(text[3]);
    textbox[0]->drawTo(window);
    textbox[1]->drawTo(window);
}


//Herencia
class clsMenuInicioSesion : public clsMenu{
    private:
        
    public:
        clsMenuInicioSesion(RenderWindow *w,Font *f);
        void setTextbox(Font *f);
        void setTextboxColor(int, Color, bool);
        void setTextboxSelected(int, bool);
        void draw();
        void typedOn(Event);
        void deleteTextboxString(int);

};

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