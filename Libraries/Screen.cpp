#include "Screen.h"
clsScreen::clsScreen(RenderWindow *w){
    window = w;
    textbox[0] = new clsTextbox(0,Color(0,0,0,0),false);
    textbox[1] = new clsTextbox(0,Color(0,0,0,0),false);
}
clsScreen::clsScreen(RenderWindow *w,Clock 	*c){
    reloj=c;
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
    window->draw(text[4]);
    window->draw(text[5]);
    textbox[0]->drawTo(window);
    textbox[1]->drawTo(window);
    window->draw(*sprites[1]);
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

void clsScreen::update(int n,int m,float speed) {
    if(reloj->getElapsedTime().asSeconds() > speed){
        actualTexture = (actualTexture + 1) % m; 
        sprites[n]->setTexture(texturesCo[actualTexture]);
        reloj->restart();
    }
}
void clsScreen::setSprite(int i, Sprite *sp){
    sprites[i] = sp;
}


void clsScreen::setTextureColor(int i, Color color){
    sprites[i]->setColor(color);
}

void clsScreen::updateDif(int n,float dif)
{
    if(alfa>=0)
    {
        if(reloj->getElapsedTime().asSeconds() > dif)
        {
            sprites[n]->setColor(Color(255,255,255,alfa));
            alfa=alfa-10;
            reloj->restart();
        }
    }
}

void clsScreen::updateDifI(int n,float dif)
{
    if(alfam<=255)
    {
        if(reloj->getElapsedTime().asSeconds() > dif)
        {
            sprites[n]->setColor(Color(255,255,255,alfam));
            alfam=alfam+5;
            reloj->restart();
        }
    }
}

void clsScreen::setSpriteResize(int n)
{
    unsigned int screenWidth = VideoMode::getDesktopMode().width;
    unsigned int screenHeight = VideoMode::getDesktopMode().height;

    float scaleX = (float)screenWidth / sprites[n]->getTexture()->getSize().x;
    float scaleY = (float)screenHeight / sprites[n]->getTexture()->getSize().y;
    sprites[n]->setScale(scaleX, scaleY);
}

void clsScreen::setTextureinSprite(int n,int m)
{
    sprites[n]->setTexture(texturesCo[m]);
}

void clsScreen::setTextOrigin(float x,float y,int n)
{
    text[n].setOrigin({-x,-y});
}

void clsScreen::setString(int n,string s)
{
    text[n].setString(s);
}