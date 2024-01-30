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

bool clsUsuario::operator <(clsUsuario user){
    if(mmr < user.mmr){
        return true;
    }
    else{
        return false;
    }
}

bool clsUsuario::operator >(clsUsuario user){
    if(mmr > user.mmr){
        return true;
    }
    return false;
}

clsUsuario::clsUsuario(){

}

void clsUsuario::setNombre(string p){
    nombre = p;
}
void clsUsuario::setPasswd(string p){
    passwd = p;
}