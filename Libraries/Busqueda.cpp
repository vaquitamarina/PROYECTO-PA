#include "Ordenacion.h"

template <class T>
int SecuencialDes<T> :: Busca(T *A,int n,int dato){
    int pos=0;
    int i=0;
    while (i<=n && A[i]!=dato)
    {
        i++;
    }
    if (i <= n)
    {
        pos=i;
    }
    return pos;
}

template <class T>
int SecuencialOrd<T> :: Busca(T *A,int n,int dato){
    int pos=0;
    int i=0;
    while (i<=n && A[i]<dato)
    {
        i++;
    }
    if (i > n || A[i]>dato)
    {
        pos=-i;
    }
    else
    {
        pos=i;
    }
    return pos;
}

template <class T>
int BusBinaria<T> :: Busca(T *A,int n,int dato){
    int pos=0;
    int izq=0;
    int der=n-1;
    int cen=(izq+der)/2;
    while (izq<=der && A[cen]!=dato)
    {
        if (A[cen]>dato)
        {
            der=cen-1;
        }
        else
        {
            izq=cen+1;
        }
        cen=(izq+der)/2;
    }
    if (izq<=der)
    {
        pos=cen;
    }
    else
    {
        pos=-izq;
    }
    return pos;
}

template <class T>
int BusBinariaR<T> :: Busca(T *A,int n,int dato){
    int pos=0;
    int izq=0;
    int der=n-1;
    pos=buscar(A,dato,izq,der);
    return pos;
}
template<class T>
int BusBinariaR<T> :: buscar(T *A,int dato,int izq,int der){
    int pos=0;
    int cen=(izq+der)/2;
    if (izq<=der && A[cen]!=dato)
    {
        if (A[cen]>dato)
        {
            pos=buscar(A,dato,izq,cen-1);
        }
        else
        {
            pos=buscar(A,dato,cen+1,der);
        }
    }
    else
    {
        if (izq<=der)
        {
            pos=cen;
        }
        else
        {
            pos=-izq;
        }
    }
    return pos;
}