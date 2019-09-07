#include <iostream>
using namespace std;


 int c(int n);

int main(){
	
	int n;
	
	cout<<"Ingrese un numero entero: " << endl;
	cin>> n;
	c(n);
	cout << n<< endl;
	
	int i=1;
	while(i<n){
		cout<< n-i<< endl;
		i++;
	}
	
	return 0;
}


 int c(int n){
 
  int x=0;
   
   if(n==1){
   	return 0;
   }
    else{
	 x=1+c(n-1);
    cout << x<< endl;
    return x;
	}
 
}
