#include <iostream>
using namespace std;
void metodo(int arr[], int n, int i)
{
int aumentar = i;
int l = 2 * i + 1;
int r = 2 * i + 2;
if (l < n && arr[l] > arr[aumentar])
aumentar = l;
if (r < n && arr[r] > arr[aumentar])
aumentar = r;
if (aumentar != i) {
swap(arr[i], arr[aumentar]);
metodo(arr, n, aumentar);
}
}
void heapSort(int arr[], int n)
{
for (int i = n / 2 - 1; i >= 0; i--)
metodo(arr, n, i);
for (int i = n - 1; i >= 0; i--)
{
swap(arr[0], arr[i]);
metodo(arr, i, 0);
}
}
void Array(int arr[], int n)
{
for (int i = 0; i < n; ++i)
cout << arr[i] << " ";

}
int main()
{
int arr[] = { 5,18,4,13,10,7};
int n = sizeof(arr) / sizeof(arr[0]);
heapSort(arr, n);
cout << "numero por ordenamiento heap sort"<<endl;
Array(arr, n);
}


