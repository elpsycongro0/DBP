#include <bits/stdc++.h>
using namespace std;
int main(){
int r[100][100];
int c;
for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
        *((**(&r)+j)+i)=rand()%11;
    }
}
cin>>c;
for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
        if(*((**(&r)+j)+i)==c){cout<<"("<<j<<","<<i<<") ";}
    }
}
return 0;
}
