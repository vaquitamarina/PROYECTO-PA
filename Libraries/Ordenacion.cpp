#include "Ordenacion.h"

template <class T>
void Ordenador<T> :: Intercambia(T *A, int ind1, int ind2){
    T aux;
    aux = A[ind1];
    A[ind1] = A[ind2];
    A[ind2] = aux;
}

template <class T>
void InterDirDer<T> :: Ordena(T *A, int n){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n-i; j++)
            if(A[j] > A[j+1])
                this->Intercambia(A,j,j+1);
}

template <class T>
void InterDirIz<T> :: Ordena(T *A, int n){
    for(int i = n-1; i >= 0; i--)
        for(int j = n-i; j > 0; j--)
            if(A[j] < A[j-1])
                this->Intercambia(A,j,j-1);
}


template <class T>
void selecdir<T> :: Ordena(T *A,int n){
    for(int i=0;i<n-1;i++)
    {
        int menor=A[i];
        int k=i;
        for(int j=i+1;j<n;j++)
        {
            if(menor>A[j])
            {
                menor=A[j];
                k=j;
            }
        }
        A[k]=A[i];
        A[i]=menor;
    }
}

template <class T>
void ShellSort<T> :: Ordena(T *A,int n){
    int k=n+1;
    while(k>1)
    {
        k=k/2;
        int cen=1;
        while(cen==1)
        {
            cen=0;
            for(int i=0;i<n-k;i++)
            {
                if(A[i]>A[i+k])
                {
                    this->Intercambia(A,i,i+k);
                    cen=1;
                }
            }
        }
    }
}


template <class T>
void QuickSort<T> :: Ordena(T *A,int n){
    Reduce(A,0,n-1);
}

template <class T>
void QuickSort<T> :: Reduce(T *A,int inicio,int final){
    int izq=inicio;
    int der=final;
    int pos=izq;
    int cen=1;
    while(cen==1)
    {
        cen=0;
        while((A[pos]<=A[der])&&(pos!=der))
        {
            der--;
        }
        if(pos!=der)
        {
            this->Intercambia(A,pos,der);
            pos=der;
            while((A[pos]>=A[izq])&&(pos!=izq))
            {
                izq++;
            }
            if(pos!=izq)
            {
                this->Intercambia(A,pos,izq);
                pos=izq;
                cen=1;
            }
        }
        if(pos-1>inicio)
        {
            Reduce(A,inicio,pos-1);
        }
        if(pos+1<inicio)
        {
            Reduce(A,pos+1,final);
        }
    }
}
