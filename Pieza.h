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



class clsPeon : public clsPieza{
    private:

    public:

};

class clsReina : public clsPieza{
    private:

    public:

};

class clsRey : public clsPieza{
    private:

    public:

};

class clsAlfil : public clsPieza{
    private:

    public:

};

class clsCaballo : public clsPieza{
    private:

    public:

};


