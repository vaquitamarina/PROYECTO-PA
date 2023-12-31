
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
        string getFigura();
    
};

clsCasilla::clsCasilla(){
}

string clsCasilla::getFigura(){
    if(!vacio){
        return pPieza->getFigura();
    }
    return "/";
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
        clsTablero(/*clsCasilla matriz[8][8] */);
        void mostrarTablero();
};



clsTablero::clsTablero(){
    clsPieza peon1(0,1,'b',"p");
    clsPieza peon2(0,1,'b',"p");
    clsPieza peon3(0,1,'b',"p");
    clsPieza peon4(0,1,'b',"p");
    clsPieza peon5(0,1,'b',"p");
    clsPieza peon6(0,1,'b',"p");
    clsPieza peon7(0,1,'b',"p");
    clsPieza peon8(0,1,'b',"p");
    clsPieza peon1n(0,1,'b',"p");
    clsPieza peon2n(0,1,'b',"p");
    clsPieza peon3n(0,1,'b',"p");
    clsPieza peon4n(0,1,'b',"p");
    clsPieza peon5n(0,1,'b',"p");
    clsPieza peon6n(0,1,'b',"p");
    clsPieza peon7n(0,1,'b',"p");
    clsPieza peon8n(0,1,'b',"p");
   
    clsCasilla a1;
    clsCasilla a2;
    clsCasilla a3;
    clsCasilla a4;
    clsCasilla a5;
    clsCasilla a6;
    clsCasilla a7;
    clsCasilla a8;
    clsCasilla b1;
    clsCasilla b2;
    clsCasilla b3;
    clsCasilla b4;
    clsCasilla b5;
    clsCasilla b6;
    clsCasilla b7;
    clsCasilla b8;
    clsCasilla c1;
    clsCasilla c2;
    clsCasilla c3;
    clsCasilla c4;
    clsCasilla c5;
    clsCasilla c6;
    clsCasilla c7;
    clsCasilla c8;
    clsCasilla d1;
    clsCasilla d2;
    clsCasilla d3;
    clsCasilla d4;
    clsCasilla d5;
    clsCasilla d6;
    clsCasilla d7;
    clsCasilla d8;
    clsCasilla e1;
    clsCasilla e2;
    clsCasilla e3;
    clsCasilla e4;
    clsCasilla e5;
    clsCasilla e6;
    clsCasilla e7;
    clsCasilla e8;
    clsCasilla f1;
    clsCasilla f2;
    clsCasilla f3;
    clsCasilla f4;
    clsCasilla f5;
    clsCasilla f6;
    clsCasilla f7;
    clsCasilla f8;
    clsCasilla g1;
    clsCasilla g2;
    clsCasilla g3;
    clsCasilla g4;
    clsCasilla g5;
    clsCasilla g6;
    clsCasilla g7;
    clsCasilla g8;
    clsCasilla h1;
    clsCasilla h2;
    clsCasilla h3;
    clsCasilla h4;
    clsCasilla h5;
    clsCasilla h6;
    clsCasilla h7;
    clsCasilla h8;

    
    a2.setPieza(&peon1);
    b2.setPieza(&peon2);
    c2.setPieza(&peon3);
    d2.setPieza(&peon4);
    e2.setPieza(&peon5);
    f2.setPieza(&peon6);
    g2.setPieza(&peon7);
    h2.setPieza(&peon8);

    a7.setPieza(&peon1);
    b7.setPieza(&peon2);
    c7.setPieza(&peon3);
    d7.setPieza(&peon4);
    e7.setPieza(&peon5);
    f7.setPieza(&peon6);
    g7.setPieza(&peon7);
    h7.setPieza(&peon8);

    matrizCasilla[0][1] = a2;
    matrizCasilla[1][1] = b2;
    matrizCasilla[2][1] = c2;
    matrizCasilla[3][1] = d2;
    matrizCasilla[4][1] = e2;
    matrizCasilla[5][1] = f2;
    matrizCasilla[6][1] = g2;
    matrizCasilla[7][1] = h2;
    matrizCasilla[0][7] = a7;
    matrizCasilla[1][7] = b7;
    matrizCasilla[2][7] = c7;
    matrizCasilla[3][7] = d7;
    matrizCasilla[4][7] = e7;
    matrizCasilla[5][7] = f7;
    matrizCasilla[6][7] = g7;
    matrizCasilla[7][7] = h7;
}   

void clsTablero::mostrarTablero(){
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"///"<<matrizCasilla[0][1].getFigura()<<"///       ///////       ///////       ///////       "<<endl;
    cout<<"///////       ///////       ///////       ///////       "<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
    cout<<"       ///////       ///////       ///////       ///////"<<endl;
}
