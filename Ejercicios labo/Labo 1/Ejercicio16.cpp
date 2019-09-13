#include <iostream>
using namespace std;

int main(){
  int a[10];

  for(int i=0; i<10; i++){
    cout<<"Ingrese un numero " << i << ":" << endl;
    cin>> a[i];
  }

  int suma=0;

  for(int i=0; i<10; i++){
    suma= a[i] + suma;
  }
  cout<<"La suma de los numeros ingresados es: "<< suma << endl;


int promedio;
  promedio=suma/10;
     cout<<"El promedio de los numeros ingresados es: "<< promedio << endl;

     return 0;
}
