#include <bits/stdc++.h>
template <class Tn>
class Nodo {
public:
    Tn *pT;
    Nodo<Tn> *anterior;
    Nodo(Tn t, Nodo<Tn> *ant){
        anterior=ant;
        pT = new Tn(t);
    }
    Nodo(Nodo<Tn> *n) {
        pT = new Tn(*n.pT);
        anterior = n.ante;
    }
    ~Nodo() { delete pT; }
};
