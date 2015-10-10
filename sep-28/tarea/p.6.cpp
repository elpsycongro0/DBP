#include <bits/stdc++.h>
using namespace std;
int main(){
int r=0;
for(int i=0;i<1000;i++){
    if(i%3==0 or i%5==0){r=r+i;}
}
cout<<r;
return 0;
}
