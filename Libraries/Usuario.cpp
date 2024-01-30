#include "Usuario.h"
#include <string>
using namespace std;

clsUsuario::clsUsuario(string n,string p ,int m ){
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

void clsUsuario::setMmr(int m){
    mmr = m + mmr;
    if(mmr < 0){
        mmr = 0;
    }
}

int clsUsuario::getMmr(){
    return mmr;
}