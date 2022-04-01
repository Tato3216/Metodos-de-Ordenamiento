#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int cadena[30];
	int i,x,aux,n;
	
	cout<<"Cuantos numeros ingresaras? "<<endl;
	cin>>n;
    for (i=1;i<=n;i++){
	cout<<"\ta["<<i<<"] : ";
	cin>>cadena[i];
	}
	for(i=0;i<5;i++){
		x = i; 
		aux = cadena[i];
		
		while((x>0) && (cadena[x-1] > aux)){
			cadena[x] = cadena[x-1];
			x--;
		}
		cadena[x] = aux;
	}
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<cadena[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<cadena[i]<<" ";
	}
	
	getch();
	return 0;
}
