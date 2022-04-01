#include<iostream>
#include<conio.h>

using namespace std;
int Arreglo[15];
void Arre(int Numero);
void ingreso(int n);
void metodo(int n);

int main(){
    int Num;
    cout<<"Favor de ingresar los numeros : ";
    cin>>Num;
    Arre(Num);
    metodo(Num);
    cout<<endl;
    ingreso(Num);
    return 0;
}

void Arre(int n){
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<"Numeros : ";
        cin>>Arreglo[i];
    }
}

void ingreso(int n){
    int i;
    cout<<"numeros ordenados por le metodo de ordenacion Shell"<<endl;
    for(i=1;i<=n;i++)
    {
        
        cout<<Arreglo[i]<<endl;
    }
}

void metodo(int n){
    int i,j,k,aumentar,aux;
    
    aumentar=n/2;
    
    while(aumentar>0){
        for(i=aumentar+1;i<=n;i++){
            j=i-aumentar;
            while(j>0){
                if(Arreglo[j]>=Arreglo[j+aumentar]){
                    aux = Arreglo[j];
                    Arreglo[j] = Arreglo[j+aumentar];
                    Arreglo[j+aumentar] = aux;
                }
                else{
                        j=0;
                    }
                j=j-aumentar;
            }
        }
        aumentar=aumentar/2;
    }
}

