#include <bits/stdc++.h>
using namespace std;

class clsUsuario{
    private:
        string nombre;
        int mmr;
        string passWd;
    public:
        clsUsuario(int,int,string);
        string getNombre();
};

clsUsuario::clsUsuario(int n, int m, string p){
    nombre = n;
    mmr = m;
    passWd = p;
}

string clsUsuario::getNombre(){
    return nombre;
}


