#include <bits/stdc++.h>
using namespace std;
vector<int> cov(int a){
    vector<int> x,y;
    while(a!=0){
        x.push_back(a%10);
        a=a/10;
    }
    return x;
}
int pal(int x){
    vector<int> a=cov(x);
    for (int i=0;i<a.size()/2;i++){
        if (a[i]!=a[a.size()-1-i]){return 0;}
    }
    return 1;
}
int main(){
    int x,y,r;x=999;y=999;r=0;
    vector<int> z;
    while(true){
        if(x<2){break;}
        if(pal(x*y)==1){z.push_back(x*y);x--;y=999;}
        y--;
        if(y<2){x--;y=999;}
    }
    for(int i=0;i<z.size();i++){if (r<z[i]){r=z[i];}}
    cout<<r;
    return 0;
}
