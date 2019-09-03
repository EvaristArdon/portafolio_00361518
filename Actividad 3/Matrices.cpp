#include<iostream>
#include<stdlib.h>

using namespace std;

int **Pmatrix,fil=10,col=20;

int main(){
	int a=0;
	
	Pmatrix=new int*[fil];
	
	for(int i=0;i<fil;i++)
	   Pmatrix[i]= new int[col];
	
    Pmatrix[0][0]=100;
	cout<<"\n Direcciones de memoria\n"<<&Pmatrix[0][0]<<"\n"<<&Pmatrix[2][1]<<"\n"<<&Pmatrix[5][1]<<"\n"<<&Pmatrix[1][10]<<"\n"<<&Pmatrix[2][10]<<"\n"<<&Pmatrix[5][3]<<"\n"<<&Pmatrix[9][19];

//1. Si es valida, la desreferencia	
	Pmatrix[0][0]=*(*Pmatrix);
//Prueba
	cout<<"\n"<<Pmatrix[0][0]<<"\n";

//2. Se hara con un for anidado
  /* No es valida la opcion
      for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(*(Pmatrix))+(i+ *col +j)=a;
       	 a++;
	   }
	   a=0;
	}
 */  
 //3. Si es valida la opcion y es la mejor 
 /*
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(*(Pmatrix+i)+j)=a;
       	 a++;
	   }
	   a=0;
	}
		for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<*(*(PMatrix+i)+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

/*4. Si es valida la opcion
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(Pmatrix[i]+j)=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<*(Pmatrix[i]+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

/*5. Si es valida la opcion
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 (*(Pmatrix+i))[j]=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<(*(Pmatrix+i))[j]<<"]";	
		}
		cout<<"\n";
    }
*/
	
	return 0;
}
