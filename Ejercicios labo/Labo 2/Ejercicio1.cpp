#include <iostream>
using namespace std;

int mcd(int me, int ma, int r){

if(ma>me){
return me;
}
else{
  me=r;
  ma=me;
  return me;
 }
}

int main(){

    int mayor;
    cout << "Ingrese un numero entero: " << endl;
    cin >> mayor;


    int menor;
    cout << "Ingrese un numero entero menor al anterior: " << endl;
    cin >> menor;

	int r=mayor/menor;

 	mcd(menor, mayor, r);
 	 cout<<"MCD: "<<mcd(menor, mayor, r)<< endl;


return 0;
  }
