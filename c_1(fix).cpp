#include "mylib.h"
#include <iostream>
using namespace std;

int square(int x){
    return x*x;
}
int cube(int x){
    return square(x)*x;
}
int fibo(int x){
    if(x==1 or x==0){
        return 1;
    }
    return fibo(x-1)+fibo(x-2);
    }
int main(){
    int a=0;
    int b;
    while(a!=4){
        cout<<"Que quieres hacer?"<<endl;
        cout<<"1_elevar al cuadrado"<<endl;
        cout<<"2_elevar al cubo"<<endl;
        cout<<"3_serie fibonacci"<<endl;
        cin>>a;
        if(a==1){
            cin>>b;
            cout<<square(b)<<endl;
        }
        if(a==2){
            cin>>b;
            cout<<cube(b)<<endl;
        }
        if(a==3){
            cin>>b;
            cout<<fibo(b)<<endl;
        }
        if(a==4){
            return 0;
        }
    }
    return 0;

}
