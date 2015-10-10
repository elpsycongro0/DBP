#include <bits/stdc++.h>
using namespace std;
void mod(string a){
    int b;
    for(int i=0;i<a.length()-1;i++){
        if (a[i]==32){
            b=i;break;
        }
    }
    for(b;b<a.length()-1;b++){
        if(a[b+1]>64 and a[b+1]<91){break;}
        a[b+1]=char(95);cout<<a<<endl;
        cin>>a[b+1];
    }
    cout<<a;
}
int main(){
    string a;
    getline(cin,a);
    mod(a);
    return 0;
}
