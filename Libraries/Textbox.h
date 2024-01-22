#ifndef TEXTBOX_H
#define TEXTBOX_H
#define DELETE_KEY 8
#define ENTER_KEY 13
#define ESCAPE_KEY 27

#include <SFML/Graphics.hpp>

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
        void deleteString();
};

#include "Textbox.cpp"

#endif