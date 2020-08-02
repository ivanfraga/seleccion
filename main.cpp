#include <iostream>
using namespace std;

void arreglo(int a[], int num);
void ingresar (int a [] , int num);
void imprimir(int a[],int num);
void arreglo2(int a[], int num);
void imprimir2(int a[],int num, int b[]);
int main()
{
    int a[100], num = 10, b [100];
    ingresar(a, num);
    cout << "Elementos ingresados : ";
    imprimir(a, num);
    cout << endl;
    arreglo(a, num);
    cout << "Elementos ordenados : ";
    imprimir(a, num);
    cout << endl;
    arreglo2(a, num);
    cout << "Elementos del segundo arreglo : ";
    imprimir2(a, num, b);

    return 0;
}
void ingresar (int a [] , int num){
  int x;
  for (int i=0 ; i < num ; i++){
    cout << "Digite el numero entre 50 a 100 : ";
    cin >> x;
    if ((x >=50) && (x <= 100)){
     a [i] = x;
    }
    else{
      i--;
    }
  }
}
void imprimir(int a[],int num){
  for (int i =0; i <num; i++){
    cout << a [i]<< " ";
  }
}
void arreglo(int a[], int num)
{
    int i,j,aux,min;
    for (i=0 ; i<num; i++)
    {
       min=i;
        for (j=i+1;j<num;j++)
        {
            if(a[j]<a[min])
            {
                min =j;
            }
        }
        aux=a[i];
        a[i]=a[min];
        a[min]=aux;
    }
}
void arreglo2(int a[], int num){
  int b[10];
  for (int i = 0; i < num; i++){
    b[i] = 0.5*a[i];
  }
}
void imprimir2(int a[],int num, int b[] ){
  
  for (int i =0; i <num; i++){
    
    cout << a [i]* 0.5<< " ";
  }
}