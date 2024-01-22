#include "Registro.h"
using namespace std;
//constructor
clsRegistro::clsRegistro(){
    nUsuarios = 1;
}

//metodos
void generarRanking(){
    //metodo que ordene el mmr;
}


bool clsRegistro::iniciarSesion(string n, string p){
    for(int i=0;i<nUsuarios;i++){
        if(usuarios[i]->getNombre() == n && usuarios[i]->getPasswd() == p){
            return true;
        }
    }
    return false;
}

bool clsRegistro::crearUsuario(string n,int m,string p){
    for(int i=0;i<nUsuarios;i++){
        if(usuarios[i]->getNombre() == n){
            usuarios[nUsuarios-1] = new clsUsuario(n,m,p);
            registroOutput.open("./Registro/registro.txt", ios::app );
            registroOutput<<n<<" "<<p<<" "<<m;
            return true;
        }  
    }
    return false;
}