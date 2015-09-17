#include <iostream>
using namespace std;
int main(){
    int b;
    cin>>b;
    char a[b];
    for(int i=0;i<b;i++){
        cin>>a[i];
    }
    for(int i=0;i<b;i++){
        if(char(*(a+i))!=char(*(a+b-1-i))){
            cout<< "no"<<endl;
            return 0;
        }
    }
    cout<<"si"<<endl;
    return 0;
}

