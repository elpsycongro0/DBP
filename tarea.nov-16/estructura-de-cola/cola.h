#include <bits/stdc++.h>
#include "Nodo.h"
template <class T>
class lista {
private:
    Nodo<T> *ultimo;
    Nodo<T> *primero;
public:
    lista(Nodo<T> *i=NULL,Nodo<T> *f=NULL){ultimo=i;primero=f;}
    ~lista() { while(ultimo) Pop(); }
    void Push(T t) {
        Nodo<T> *aux = new Nodo<T>(t, ultimo);
        if(Vacia()){primero=aux;}
        ultimo = aux;
    }
    T Pop() {
        T temp(*primero->pT);
        Nodo<T> *aux = primero;
        ultimo = aux->siguiente;
        delete aux;
        return temp;
    }
    bool Vacia() { return ultimo == NULL; }
    void mostrar() {
        Nodo<T> *ap=ultimo;
        while(ap!=primero->siguiente){std::cout<<*ap->pT<<std::endl;ap=ap->siguiente;}
        std::cout<<"---"<<std::endl;
    }
    Nodo<T>* getinicio(){return ultimo;}
    void apfondo(Nodo<T> *punt){primero->anterior=punt;}
    void changefondo(Nodo<T> *newfondo){primero=newfondo;}
    lista<T>* operator +(lista<T> sumando){
        lista<T> *temp=new lista<T>(sumando.getinicio(),primero);
        sumando.apfondo(ultimo);
        return temp;
    }

};
