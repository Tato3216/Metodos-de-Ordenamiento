#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main (){
	int i, k, derecha, izquierda, aux, n, a [30];
	cout<<"Metodo de Ordenamiento: SHAKE SORT"<<endl;
	
	    cout<<"Ingreso la cantidad de numeros a ingresar: "<<endl;
	  cin>>n;
	  k=n;
	  izquierda=2,
	  derecha=n;
	  
	  for (i=1;i<=n;i++){
	  	cout<<"\ta["<<i<<"] : ";
	  	cin>>a[i];	  	
	  }
	  do{
	  	for(i=derecha;i>=izquierda;i--){
	  		if(a[i-1]>a[i]){
	  			aux=a[i-1];
	  			a[i-1]=a[i];
	  			a[i]=aux;
	  			k=i;
			  }
		  }
		 izquierda=k+1; 
		for(i=izquierda;i<=derecha;i++)
		    if(a[i-1]>a[i]){
		    	aux=a[i-1];
		    	a[i-1]=a[i],
		    	a[i]=aux;
		    	k=i;
			}
		 derecha=k-1;	
	  }while(izquierda<derecha);
	  
	  cout<<"Arreglo ordenado"<<endl;
	  for(i=1;i<=n;i++)     
	      cout<<"\t"<<a[i];
	  cout<<endl<< "\t";
	system ("Pause");
	return 0;
	getch();
}
