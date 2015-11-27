#include <bits/stdc++.h>
#include <conio.h>
#include "nave.cpp"
#include "asteroide.cpp"
#include "funciones.cpp"
#include "bala.cpp"
using namespace std;
int main(){
    hidecursor();
    navep n1(2,4,3,3);
    asteroide ast(10);
    list<bala*> B;
    list<bala*>::iterator it;
    bool game_over=false;
    limites();
    n1.impnav();
    n1.corazones();
    while(!game_over){
        if(kbhit()){
            char tecla=getch();
            n1.mover(tecla);
            if(tecla=='j'){B.push_back(new bala(n1.X()+7,n1.Y()+4));}
        }
        for(it=B.begin();it!=B.end();it++){
            (*it)->mover();
        }
        n1.muerte();
        ast.mover();ast.colision(n1);
        Sleep(30);
    }
    return 0;
}
