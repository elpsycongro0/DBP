#include <iostream>
#include <vector>
using namespace std;
int pot(int a,int b){
int c=a;
while(c*a<b){
    c=c*a;
}
return c;
}
int prim(int a){
for(int i=2;i<a;i++){
    if(a%i==0){return 0;}
}
return 1;
}
vector<int> prims(int a){
vector<int> rpta;
for (int i=2;i<a;i++){
    if(prim(i)==1){rpta.push_back(i);}
}
return rpta;
}
int main(){
int x=1;
vector<int> rpta=prims(20);
for(int i=0;i<rpta.size();i++){
    rpta[i]=pot(rpta[i],20);
    x=x*rpta[i];
}
cout<<x;
return 0;
}
