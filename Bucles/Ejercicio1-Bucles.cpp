/*1. Realice un programa que solicite de la entrada estándar un entero del 0 al 10 y muestre en la salida estándar su tabla de multiplicar.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int numero;

    do{
        cout<<"Digite un numero: ";
        cin>>numero;
    }while(numero<1 || numero>10);

    for (int i= 0; i<=20; i++ ){
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}