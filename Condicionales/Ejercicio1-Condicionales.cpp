/*1. Escriba un programa que lea dos números y determine cuál de ellos es el mayor.*/

#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    /*
    cout<<"Digite un numero: "; cin>>num1;
    cout<<"Digite otro numero: "; cin>>num2;
    
    De esta forma ocupa mucho código se puede simplificar
    */
   cout<<"Digite 2 numeros: ";
   cin>>num1>>num2;

    if (num1==num2){
        cout<<"Ambos numeros son iguales";
    }
    else if (num1>num2){
       cout<<"El mayor es: "<<num1;
    }
    else{
        cout<<"El mayor es: "<<num2;
    }

    return 0;
}