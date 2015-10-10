#include <iostream>
using namespace std;
int main(){
int r[8];
for(int i=0;i<8;i++){
    cin>>r[i];
}
for(int i=0;i<8;i++){
    cout<<r[7-i];
}
return 0;
}
