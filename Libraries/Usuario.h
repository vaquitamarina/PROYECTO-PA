#include <bits/stdc++.h>
using namespace std;

class clsUsuario{
    private:
        string nombre;
        int mmr;
        string passwd;
    public:
        clsUsuario(string,int,string);
        string getNombre();
        string getPasswd();
};

clsUsuario::clsUsuario(string n, int m, string p){
    nombre = n;
    mmr = m;
    passwd = p;
}

string clsUsuario::getNombre(){
    return nombre;
}

string clsUsuario::getPasswd(){
    return passwd;
}