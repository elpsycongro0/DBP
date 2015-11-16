#include <bits/stdc++.h>
#include "Nodo.h"
using namespace std;
class pila{
private:
    nodo *primero;
    nodo *actual;
    bool vacio(){
        return(primero==NULL);
    }
public:
    pila(){
        primero=NULL;
        actual=NULL;
    }
    void pushpila(int v){
        nodo *nuevo = new nodo(v);
        if(vacio()){primero=nuevo;}
        else{actual->siguiente=nuevo;}
        actual=nuevo;
    }
    void poppila(){
        nodo *temp=primero;
        while(temp->siguiente!=actual){
            temp=temp->siguiente;
        }
        delete(actual);
        actual=temp;
    }
    void mostrar(){
        nodo *contador=primero;
        while(contador!=actual){
            cout<<contador->valor<<endl;
            contador=contador->siguiente;
            if(contador==actual){cout<<actual->valor;break;}
        }
    }

};
