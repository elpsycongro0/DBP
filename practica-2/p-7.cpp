#include <iostream>
using namespace std;
int main(){
    int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<**matr<<" V"<<endl;
    cout<<*(*(matr+1)+2)<<" V"<<endl;
    cout<<*(matr[2]+3)<<" V"<<endl;
    cout<<(*(matr+2))[2]<<" V"<<endl;
    cout<<*((*matr)+1)<<" F"<<endl;
    return 0;
}
