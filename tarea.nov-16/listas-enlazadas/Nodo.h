#include <bits/stdc++.h>
class nodo{
private:
    int valor;
    nodo *siguiente;
public:
    nodo(int v,nodo *sig=NULL){
        valor=v;
        siguiente=sig;
    }
    friend class lista;
};
