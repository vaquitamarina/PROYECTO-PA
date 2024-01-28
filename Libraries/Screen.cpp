#include "Screen.h"
clsScreen::clsScreen(RenderWindow *w){
    window = w;
    textbox[0] = new clsTextbox(0,Color(0,0,0,0),false);
    textbox[1] = new clsTextbox(0,Color(0,0,0,0),false);
}

void clsScreen::setSprite(int n,string b){
    Image image;
    image.loadFromFile(b);
    
    textures[n].loadFromImage(image);
    sprites[n] = new Sprite(textures[n]);
}

void clsScreen::setScaleSprite(int i, Vector2f scale){
    sprites[i]->setScale(scale);
}

void clsScreen::setSpriteOpacity(int i, int a){
    sprites[i]->setColor(Color(255,255,255,a));
}

void clsScreen::setPosSprite(int i, Vector2f pos){
    sprites[i]->setPosition(pos);
}

Vector2f clsScreen::getPosSprite(int i){
    return sprites[i]->getPosition();
}

void clsScreen::setText(int i,Font *f, string s, int c, Vector2f pos){
    
    text[i].setFont(*f);
    text[i].setString(s);
    text[i].setCharacterSize(c);
    text[i].setPosition(pos); 
}

void clsScreen::setTextColor(int i, Color color){
    text[i].setColor(color);
}

void clsScreen::draw(){
    window->draw(*sprites[0]);
    window->draw(text[0]);
    window->draw(text[1]);
    window->draw(text[2]);
    window->draw(text[3]);
    textbox[0]->drawTo(window);
    textbox[1]->drawTo(window);
}

void clsScreen::closeWindow(){
    window->close();
}

void clsScreen::setTexture(int n, string filename){
    texturesCo[n].loadFromFile(filename);
}

void clsScreen::setTextureTexturetoSprite(int n, int m){
    sprites[n]=new Sprite(texturesCo[m]);
}

void clsScreen::setTextureForm(int n,int x, int y, int w, int h){
    sprites[n]->setTextureRect(IntRect(x,y,w,h));
}
