#include <bits/stdc++.h>
template <class Tn>
class Nodo {
public:
    Tn *pT;
    Nodo<Tn> *siguiente;
    Nodo(Tn t, Nodo<Tn> *ant){
        siguiente=ant;
        pT = new Tn(t);
    }
    Nodo(Nodo<Tn> *n) {
        pT = new Tn(*n.pT);
        siguiente = n.siguiente;
    }
    ~Nodo() { delete pT; }
};
