//metodo de burbuja   baiorn castellanos 
#include<stdio.h>
#include<conio.h>
int a[3]={3,2,1};
int i,j,aux,n=3;
void main()
{
clrscr();
for(i=0;i<=n;i++){
for(j=0;j<n-1;j++){
if(a[j]>a[j+1]){
aux=a[j];
a[j]=a[j+1];
a[j+1]=aux;
}
}
}
for(i=0;i<3;i++)
{
printf("%d",a);
}
getch();
} 
