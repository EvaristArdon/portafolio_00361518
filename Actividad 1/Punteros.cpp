#include <iostream>
using namespace	 std;

   void  calculos(int num, int *doble, int *triple){
   		*doble= 2 * num;
   		*triple = 3 * num;
   		
   }
		int main(){
			int numero = 2, doble = 0, triple = 0;
		
		    calculos(numero, &doble, &triple);
		
			cout << " El doble de 2 es " 	<< doble << endl;
			cout << " El triple de 2 es "  << triple << endl;
			
			int *p1 = &doble;
			int *p2= &triple;
			int *p3= &numero;
			
			cout << " Direccion de memoria de num es:  " << p1 << endl;
			cout << " Direccion de memoria de doble es:  " << p2 << endl;
			cout << " Direccion de memoria de triple es:  " << p3 << endl;
			
			cout << " Contenido de num es:  " << *p3 << endl;
			cout << " Contenido de doble es:  " << *p1 << endl;
			cout << " Contenido de triple es:  " << *p2 << endl;
			
			
			return 0;
				
		}

