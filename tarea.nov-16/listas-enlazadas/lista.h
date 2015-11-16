#include <bits/stdc++.h>
#include "Nodo.h"
using namespace std;
class lista{
private:
    nodo *primero;
    nodo *actual;
    bool vacio(){
        return(primero==NULL);
    }
public:
    lista(){
        primero=NULL;
        actual=NULL;
    }
    void insertar(int v){
        nodo *nuevo = new nodo(v);
        if(vacio()){primero=nuevo;}
        else{actual->siguiente=nuevo;}
        actual=nuevo;
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
