#include "mylib.h"
#include <iostream>
using namespace std;

int square(int *x){
    *x=*x**x;
}
int cube(int *x){
    int b=*x;
    square(x);
    *x=b**x;
}
int fibo(int *x){
    int t1,t2,t3;
    t1=0;
    t2=1;
    for(int i=0;i<*x-1;i++){
        t3=t1+t2;
        t1=t2;
        t2=t3;
        }
    *x=t3;
    }
int main(){
    int a=0;
    int b;
    while(a!=4){
        cout<<"Que quieres hacer?"<<endl;
        cout<<"1_elevar al cuadrado"<<endl;
        cout<<"2_elevar al cubo"<<endl;
        cout<<"3_serie fibonacci"<<endl;
        cout<<"4_cerrar"<<endl;
        cin>>a;
        if(a==1){
            cin>>b;
            square(&b);
            cout<<b<<endl;
        }
        if(a==2){
            cin>>b;
            cube(&b);
            cout<<b<<endl;
        }
        if(a==3){
            cin>>b;
            fibo(&b);
            cout<<b<<endl;
        }
        if(a==4){
            return 0;
        }
    }
    return 0;

}
