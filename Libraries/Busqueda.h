#ifndef BUSQUEDA_H
#define BUSQUEDA_H

using namespace std;

template<class T>
class Buscador{
    public:
        virtual int Busca(T *A,int n,int dato);
};

template<class T>
class SecuencialDes : public Buscador<T>{
    public: 
        int Busca(T *A,int n,int dato);
};

template<class T>
class SecuencialOrd : public Buscador<T>{
    public: 
        int Busca(T *A,int n,int dato);
};

template <class T>
class BusBinaria : public Buscador<T>{
    public:
        int Busca(T *A,int n,int dato);
};

template<class T>
class BusBinariaR : public Buscador<T>{
    public:
        int Busca(T *A,int n,int dato);
        int buscar(T *A,int dato,int izq,int der);
};

#endif
#include"Busqueda.cpp"
