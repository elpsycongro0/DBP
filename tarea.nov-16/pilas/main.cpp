#include <bits/stdc++.h>
#include "pila.h"

using namespace std;

int main(){
    pila lst;
    lst.pushpila(1);
    lst.pushpila(2);
    lst.pushpila(3);
    lst.pushpila(4);
    lst.poppila();
    lst.pushpila(5);
    lst.mostrar();
    return 0;

}
