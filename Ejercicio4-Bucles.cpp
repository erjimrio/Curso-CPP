/*4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura más alta y la más baja. */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int contador = 0;
    float lectura, max, min;
    while (contador<=6){
        cout<<"Lectura de temperatura: ";
        cin>>lectura;
    }
    system("pause");
    return 0;
}