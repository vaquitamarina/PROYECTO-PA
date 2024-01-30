#include "Registro.h"
using namespace std;
//constructor
clsRegistro::clsRegistro(){
    nUsuarios = 0;
    
    registroInput.open("./Registro/nusuarios.txt");
    registroInput>>nUsuarios;

    registroInput.close();
    registroInput.open("./Registro/registro.txt");
    
    string n,p;
    int m;
    for (int i = 0; i < nUsuarios; i++)
    {
        registroInput>>n>>p>>m;
        usuarios[i] = new clsUsuario(n,p,m);
    }
    registroInput.close();
}

//metodos
void generarRanking(){
    //metodo que ordene el mmr;
}


bool clsRegistro::iniciarSesion(string n, string p){
    for(int i = 0; i < nUsuarios; i++){
        if(usuarios[i]->getNombre() == n && usuarios[i]->getPasswd() == p){
            return true;
        }
    }
    return false;
}

bool clsRegistro::crearUsuario(string n,string p,int m){
    for(int i=0;i<nUsuarios;i++){
        if(usuarios[i]->getNombre() == n){
            return false;
        }  
    }
    usuarios[nUsuarios] = new clsUsuario(n,p,m);
    nUsuarios++;
    return true;
}

void clsRegistro::setMmr(string n, int m){
    for(int i = 0; i < nUsuarios;i++){
        if(usuarios[i]->getNombre() == n){
            usuarios[i]->setMmr(m);
            break;
        }
    }
}

clsRegistro::~clsRegistro(){
    registroOutput.open("./Registro/nusuarios.txt");
    registroOutput<<nUsuarios;
    registroOutput.close();

    registroOutput.open("./Registro/registro.txt");

    for(int i = 0; i < nUsuarios; i++){
        registroOutput<<usuarios[i]->getNombre()<<" "<<usuarios[i]->getPasswd()<<" "<<usuarios[i]->getMmr()<<endl;
        cout<<usuarios[i]->getMmr();
    }

    registroOutput.close();

}