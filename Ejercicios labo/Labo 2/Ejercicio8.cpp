#include <iostream>
using namespace std;

int main(){
  int n;
    cout"Ingrese su numero entero:"<< endl
    cin>> n;

  int c=0;
  contar_enteros(n, c);

    cout"EL numero de digitos es:"<< contar_enteros(n, c)<< endl;
return 0;
}

int contar_enteros(int n, int c){
  if(n < 9){
    return n;
  }
  else if(n > 9){
    c= n%10;
    return 1 + contarenteros(n/10, c)
  }
}
