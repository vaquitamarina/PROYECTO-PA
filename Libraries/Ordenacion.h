#ifndef ORDENACION_H
#define ORDENACION_H
    
template <class T> class Ordenador{
    public:
        virtual void Ordena(T *A, int n) = 0;
        void Intercambia(T *A, int ind1, int ind2);
};
#include "Ordenacion.cpp"

#endif