using namespace std;

class clsPieza{
    protected:
        int posX;
        int posY;
        char color;
        bool estado;

    public:
        clsPieza(int, int, char);
        void setPosX(int);
        void setPosY(int);
        void getColor();
};

// Metodos de la clase Pieza

void clsPieza::setPosX(int x){
    posX = x;
}
void clsPieza::setPosY(int y){
    posY = y;
}



    