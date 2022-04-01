#include <iostream>
using namespace std;
 

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];  
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];    
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int m = (l+r-1)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
void array(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main()
{
    int arr[] = { 9,7,8,3,2,100 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Metodo de ordenamiento por Marge Sort "<<endl;
    cout<<endl;
    cout << "numero a ordenar "<<endl;
    array(arr, arr_size);
 cout<<endl;
    mergeSort(arr, 0, arr_size - 1);
 
    cout << "numero ordenados"<<endl;
    array(arr, arr_size);
    return 0;
}