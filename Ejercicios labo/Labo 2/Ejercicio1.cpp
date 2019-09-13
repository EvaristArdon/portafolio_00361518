#include <iostream>
using namespace std;

int mcd(in ma, int me, r)

r=ma/me;

if(residuo==0){
  return mcd(ma, me, r);
}
else{
  me=ma;
  me=residuo
return mcd(ma/me);
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
