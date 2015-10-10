#include <bits/stdc++.h>
using namespace std;
int main(){
double r[7];
for(int i=0;i<7;i++){cin>>r[i];}
int M=r[0],m=r[0];
for(int i=0;i<7;i++){
    if(r[i]>M){M=r[i];}
    if(r[i]<m){m=r[i];}
}
cout<<m<<"  "<<M;
return 0;
}
