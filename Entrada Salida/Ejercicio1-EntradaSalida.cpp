/*1. Escribe un programa que lea de la entrada estandar dos números y muestre en la salida estándar su suma, resta, multiplicación y división. */

#include<iostream>

using namespace std;

int main(){
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout<<"Digite un numero: "; cin>>n1;
    cout<<"Digite otro numero: "; cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout<<"\nEl resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;

    return 0;
}