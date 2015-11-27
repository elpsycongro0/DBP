#include "bala.h"
#include <bits/stdc++.h>
#include <conio.h>
#include "funciones.h"
using namespace std;
bala::bala(int _x,int _y){
    x=_x;
    y=_y;
}
bala::~bala(){
 delete(&x);delete(&y);
}
void bala::mover(){
    gotox(x,y);cout<<" ";
    if(x<99){x++;}
    if(x==100){}
    gotox(x,y);cout<<"-";
}
