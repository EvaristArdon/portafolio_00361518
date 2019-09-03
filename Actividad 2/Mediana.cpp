#include <iostream>
using namespace std;


	int main (){
	
	int tamano, M1, pos, M2;
	float total, n1, n2;
	
	cout << "Ingrese el numero de digitos: " << endl;
	cin >> tamano;
	
	int mediana[tamano];
	
	for(int i=0; i<tamano; i++){
        cout << "Numero "<< i <<": ";
         cin >> mediana[i];
    }
     pos= tamano%2;
     
     if(pos==0){
	
     M1= tamano/2;
     M2= M1-1;
     n1= mediana[M1];
     n2= mediana[M2];
     
     total= (n1+n2)/2;
     
     cout << "Mediana de numeros pares: " << total << endl;
    }
    else{
    	M1= tamano/2;
    	n1= mediana[M1];
    	total = n1;
    	cout << "Mediana de numeros impares: " << total << endl;
    	
	}
    
    return 0;
}
