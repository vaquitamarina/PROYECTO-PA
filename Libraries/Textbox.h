#include <SFML/Graphics.hpp>
#define DELETE_KEY 8
#define ENTER_KEY 13
#define ESCAPE_KEY 27

using namespace std;
using namespace sf;

class clsTextbox{
    private:
        Text textbox;
        ostringstream text;
        bool isSelected = false;
        bool hasLimit = false;
        int limit;
    public:
        clsTextbox(int, Color, bool);
        void inputLogic(int);
        void deleteLastChar();
        void setFont(Font &);
        void setPosition(Vector2f);
        void setLimit(bool);
        void setLimit(bool, int);
        void setSelected(bool);
        string getText();
        void drawTo(RenderWindow *);
        void typedOn(Event input);
        void setColor(Color);
};
//constructor
clsTextbox::clsTextbox(int size, Color color, bool sel){
    textbox.setCharacterSize(size);
    textbox.setColor(color);
    isSelected = sel;
    if(sel){
        textbox.setString("_");
    }
    else{
        textbox.setString("");
    }
}

//metodos
void clsTextbox::inputLogic(int charTyped){
    if(charTyped != DELETE_KEY && charTyped != ENTER_KEY && charTyped != ESCAPE_KEY){
        text << static_cast<char>(charTyped);
    }
    else if(charTyped == DELETE_KEY){
        if(text.str().length() > 0){
            deleteLastChar();
        }
    }
    textbox.setString(text.str() + "_");
}

void clsTextbox::setColor(Color c){
    textbox.setColor(c);
}

void clsTextbox::deleteLastChar(){
    string t = text.str();
    string newT = "";
    for(int i = 0; i < t.length() - 1; i++){
        newT += t[i];
    }
    text.str("");
    text << newT;
    
    textbox.setString(text.str());
}

void clsTextbox::setFont(Font &font){
    textbox.setFont(font);
}

void clsTextbox::setPosition(Vector2f pos){
    textbox.setPosition(pos);
}

void clsTextbox::setLimit(bool l){
    hasLimit = l;
}
void clsTextbox::setLimit(bool l, int lim){
    hasLimit = l;
    limit = lim;
}

void clsTextbox::setSelected(bool sel){
    isSelected = sel;
    if(!sel){
        string t = text.str();
        string newT = "";
        for(int i = 0; i < t.length(); i++){
            newT += t[i];
        }
        textbox.setString(newT);
    }
    else{
        string t = text.str();
        string newT = "";
        for(int i = 0; i < t.length(); i++){
            newT += t[i];
        }
        textbox.setString(newT + "_");
    }
}

string clsTextbox::getText(){
    return text.str();
}

void clsTextbox::drawTo(RenderWindow *window){
    window->draw(textbox);
}

void clsTextbox::deleteString(){
    string t = text.str();
    string newT = "";
    for(int i = 0; i < t.length(); i++){
        newT += "";
    }
    text.str("");
    text << newT;
    
    textbox.setString(text.str());
}

void clsTextbox::typedOn(Event input){
    if(isSelected){
        int charTyped = input.text.unicode;
        if(charTyped < 128){
            if(hasLimit){
                if(text.str().length() <= limit){
                    inputLogic(charTyped);
                }
                else if(text.str().length() > limit && charTyped == DELETE_KEY){
                    deleteLastChar();
                }
            }
            else {
                inputLogic(charTyped);
            }
        }
    }
}