#include <iostream>
using namespace std;
int main(){
int b=1,c=1,d=0,t,r=0;
while(d<4000000){
    d=b+c;
    t=c;
    c=d;
    b=t;
    if(d%2==0){r=r+d;}
}
cout<<r;
return 0;
}
