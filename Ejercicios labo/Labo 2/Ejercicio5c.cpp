#include <iostream>

using namespace std;

void TorrHanoi(int discos,int Orig,int Aux, int Dest){
    if(discos==1)
      cout<<"Sujeta el disco de la torre "<<Orig<<" y colocalo en la torre "<<Dest<<endl;
    else{
      TorrHanoi(discos-1,Orig,Dest,Aux);
      cout<<"Sujeta el disco de la torre "<<Orig<<" y colocalo en la torre "<<Dest<<endl;
      TorrHanoi(discos-1,Aux,Orig,Dest);
    }
    
}

int main()
{
  int discos=0,Orig=1,Aux=2,Dest=3;
  cout<<"Ingrese el numero de discos: ";
  cin>>discos;
  cout<<"Para resolver la torre con "<<discos<<" realizar los siguientes pasos\n";
  TorrHanoi(discos,Orig,Aux,Dest);
 
    return 0;
}
