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

