#include <bits/stdc++.h>
#include "Nodo.h"
using namespace std;
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
    Nodo<T>* getfondo(){return fondo;}
    void apfondo(Nodo<T> *punt){fondo->anterior=punt;}
    void changefondo(Nodo<T> *newfondo){fondo=newfondo;}
    Pila<T>* operator +(Pila<T> sumando){
        Pila<T> *temp=new Pila<T>(sumando.getinicio(),fondo);
        sumando.apfondo(inicio);
        return temp;
    }
    void operator -(Pila<T> sust){
        vector<T> val;
        Nodo<T> *aux=new Nodo<T>(sust.getinicio());
        Nodo<T> *ap=sust.getinicio();
        while(ap!=sust.getfondo()->anterior){val.push_back(*ap->pT);ap=ap->anterior;}
        ap=aux;
        while(aux->anterior!=fondo->anterior){
            for(int i=0;i<val.size();i++){
                if (*aux->anterior->pT==val[i]){aux->anterior=aux->anterior->anterior;aux=aux->anterior;i=0;}
            }
            aux=aux->anterior;
        }
        inicio=ap;
    }

};
