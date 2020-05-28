/* 1.0 Escriba un programa que calcule el valor de : 1!+2!+3!+...+n! (Suma de factoriales). */

#include<iostream>
#include<stdlib.h> // System es para Windows OJO al correr el programa en otro SO
using namespace std;

int main(){

    int numero, factorial = 1, sumatoria=0;
    cout<<"Digite el numero de elementos a sumar: "; cin>>numero;
    for (int i=1; i<=numero; i++){
        factorial *=i;
        sumatoria=sumatoria+factorial;
    }

    cout<<"\nEl sumatoria de factoriales es: "<<sumatoria<<endl;

    system("pause");
    return 0;
}