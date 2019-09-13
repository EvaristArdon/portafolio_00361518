#include <iostream>
using namespace std;

int mcd(in ma, int me, r)

if(r==0){
  return mcd(me)
}
else{
  ma=me
  me=r
  return mcd(r=ma%me);
}

int main(){

    int mayor;
    cout << "Ingrese un numero entero: " << endl;
    cin >> mayor;


    int menor;
    cout << "Ingrese un numero entero menor al anterior: " << endl;
    cin >> menor;


int r=0;
    mcd(menor, mayor, r);

    cou<<"MCD: "<< mcd(menor, mayor, r)<< endl;

return 0;
  }
