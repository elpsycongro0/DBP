#include <bits/stdc++.h>
#include "Nodo.h"
template <class T>
class Pila {
private:
    Nodo<T> *inicio;
    Nodo<T> *fondo;
public:
    Pila(Nodo<T> *i=NULL,Nodo<T> *f=NULL){inicio=i;fondo=f;}
    ~Pila() { while(inicio) Pop(); }
    void Push(T t) {
        Nodo<T> *aux = new Nodo<T>(t, inicio);
        if(Vacia()){fondo=aux;}
        inicio = aux;
    }
    T Pop() {
        T temp(*inicio->pT);
        Nodo<T> *aux = inicio;
        inicio = aux->anterior;
        delete aux;
        return temp;
    }
    bool Vacia() { return inicio == NULL; }
    void mostrar() {
        Nodo<T> *ap=inicio;
        while(ap!=fondo->anterior){std::cout<<*ap->pT<<std::endl;ap=ap->anterior;}
        std::cout<<"---"<<std::endl;
    }
    Nodo<T>* getinicio(){return inicio;}
    void apfondo(Nodo<T> *punt){fondo->anterior=punt;}
    void changefondo(Nodo<T> *newfondo){fondo=newfondo;}
    Pila<T>* operator +(Pila<T> sumando){
        Pila<T> *temp=new Pila<T>(sumando.getinicio(),fondo);
        sumando.apfondo(inicio);
        return temp;
    }

};
