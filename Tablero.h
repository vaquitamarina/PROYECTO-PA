

using namespace std;
//------------------------------------------------------------------------------//
// Casillas//
class clsCasilla {
    private:
        clsPieza *pPieza;
        bool vacio;
    public:
        clsCasilla();
        void setPieza(clsPieza *p);
        void setVacio(bool);
    
};

clsCasilla::clsCasilla(){
}

void clsCasilla::setPieza(clsPieza *p){
    pPieza = p;
}

void clsCasilla::setVacio(bool v){
    vacio = v;
}

//------------------------------------------------------------------------------//
//Tablero//

class clsTablero{
    private:
        clsCasilla matrizCasilla[8][8];
    public:
        clsTablero(clsCasilla matriz[8][8]);
        mostrarTablero();
};

clsTablero::clsTablero(clsCasilla matriz[][8]){
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            matrizCasilla[i][j] = matriz[i][j];
        }
    }
}

