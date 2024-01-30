#ifndef ORDENACION_H
#define ORDENACION_H
    
template <class T> class Ordenador{
    public:
        virtual void Ordena(T *A, int n) = 0;
        void Intercambia(T *A, int ind1, int ind2);
};


template <class T>
class Ordenador{
    public:
        virtual void Ordena(T *A, int n) = 0;
        void Intercambia(T *A, int ind1, int ind2);
};

template <class T>
class InterDirDer : public Ordenador<T>{
    public:
        void Ordena(T *A, int n);
};

template <class T>
class InterDirIz : public Ordenador<T>{
    public:
        void Ordena(T *A, int n);
};

template <class T>
class selecdir : public Ordenador<T>{
    public:
        void Ordena(T *A, int n);
};

template <class T>
class ShellSort : public Ordenador<T>{
    public:
        void Ordena(T *A, int n);
};

template <class T>
class QuickSort : public Ordenador<T>{
    public:
        void Ordena(T *A, int n);
        void Reduce(T *A,int inicio,int final);
};



#include "Ordenacion.cpp"

#endif
