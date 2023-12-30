
using namespace std;

class clsPartida{
    private:
        string usuarioN;
        string usuarioB;
        clsTablero *pTablero;
    public:
        clsPartida(string, string, clsCasilla matriz[][8]);
};

clsPartida::clsPartida(string n, string b, clsCasilla matriz[][8]){
    usuarioN = n;
    usuarioB = b;
    pTablero = new clsTablero(matriz[8][8]);
}