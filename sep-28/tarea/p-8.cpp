#include <bits/stdc++.h>
using namespace std;
int main(){
    int x[10];
    int t;
    for(int i=0;i<10;i++){cin>>*(x+i);}
    for(int j=0;j<10;j++){
        for(int i=0;i<9;i++){
            if(*(x+i)>*(x+i+1)){
                t=*(x+i+1);*(x+i+1)=*(x+i);*(x+i)=t;
            }
        }
    }
    for(int i=0;i<10;i++){cout<<*(x+i)<<" ";}
    return 0;
}
