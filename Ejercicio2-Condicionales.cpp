/*2. Escriba un programa que lea tres números y determine cuál de ellos es el mayor.*/

#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout<<"Digite 3 numeros separados cada uno por un espacio: ";
    cin>>num1>>num2>>num3;

    if(num1==num2 && num1==num3){
        cout<<"Los numeros son iguales";
    }
    else if (num1==num2 && num2>num3){
        cout<<"El mayor es: "<<num1;
    }
    else if (num1==num2 && num2<num3){
        cout<<"El mayor es: "<<num3;
    }
    
    else if (num1>num2 && num1>num3){
        cout<<"El mayor es: "<<num1;
    }
    else if (num2>num1 && num2>num3){
        cout<<"El mayor es: "<<num2;
    }
    else{
        cout<<"El mayor es: "<<num3;
    }
    return 0;
}