#include "Ordenacion.h"

template <class T>
void Ordenador<T> :: Intercambia(T *A, int ind1, int ind2){
    T aux;
    aux = A[ind1];
    A[ind1] = A[ind2];
    A[ind2] = aux;
}