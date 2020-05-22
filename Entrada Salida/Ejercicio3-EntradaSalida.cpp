/* 3. Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
    Edad: dato de tipo entero
    Sexo: dato de tipo caracter
    Altura en metros: dato de tipo real

Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include<iostream>
using namespace std;

int main(){
    int edad;
    char sexo[10]; //guarda 10 caracteres para poder poner masculino o femenino
    float altura;

    cout<<"Introduzca edad en anios: "; cin>>edad;
    cout<<"Introduzca el sexo: "; cin>>sexo;
    cout<<"Introduzca la altura en metros: "; cin>>altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura en metros: "<<altura<<endl;

    return 0;
}