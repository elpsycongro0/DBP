#include <iostream>
#include <math.h>
using namespace std;
class vec{
public:
    double xs;
    double xe;
    double ys;
    double ye;
};
void show(vec a){
    cout<<"("<<a.xs<<","<<a.xe<<")("<<a.ys<<","<<a.ye<<")"<<endl;
}
void sumvec(vec v){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    v.xs+=a;
    v.xe+=b;
    v.ys+=c;
    v.ye+=d;
    show(v);
}
void lg(vec v){
    cout<<"longitud :"<<sqrt(pow(v.xs-v.ys,2)+pow(v.xe-v.ye,2))<<endl;
}
int main(){
    vec v1;
    cin>>v1.xs>>v1.xe>>v1.ys>>v1.ye;
    show(v1);
    lg(v1);
    sumvec(v1);
    return 0;
}
