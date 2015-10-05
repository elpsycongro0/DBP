#include <iostream>
#include <string>
using namespace std;
string no_repetitions(string a){
int c=0;
while(c<a.size()){
    for (int i=c+1;i<a.size();i++){
        if (a[c]==a[i]){
            a.erase(i,1);
            i--;
        }
    }
    c++;
}
}
int main(){
string a;
cin>>a;
cout<<no_repetitions(a);
return 0;}

