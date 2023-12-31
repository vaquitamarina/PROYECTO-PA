using namespace std;

class clsPieza{
    protected:
        int posX;
        int posY;
        char color;
        bool estado;
        string figura;

    public:
        clsPieza(int, int, char, string);
        void setPosX(int);
        void setPosY(int);
        char getColor();
        string getFigura();
};

// Metodos de la clase Pieza

clsPieza::clsPieza(int x, int y, char c,string f){
    posX = x;
    posY = y;
    color = c;
    figura = f;
}

void clsPieza::setPosX(int x){
    posX = x;
}
void clsPieza::setPosY(int y){
    posY = y;
}

string clsPieza::getFigura(){
    return figura;
}

    