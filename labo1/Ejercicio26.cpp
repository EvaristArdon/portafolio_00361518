#include <iostream>

using namespace std;

int f(int x){
    int y= x*-1;
    return y;   
}

struct comp{
    int r;
    int ima;
};

int main(void) {
    comp fa;  
    cout<<"Digite la parte real y la parte imaginaria: "<<endl;
    cin>>fa.r>>fa.ima;
    int c=f(fa.ima);
    if (c>0)
    cout<<"El conjugado de su complejo es: "<<fa.r<<"+"<<c<<"i"<<endl;
    else
        cout<<"El conjugado de su complejo es: "<<fa.r<<c<<"i"<<endl;
    return 0;
}
