/*4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura más alta y la más baja. */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int contador = 0;
    float lectura, max=0, min=0;
    while (contador<6){
        cout<<"Lectura de temperatura: ";
        cin>>lectura;
        if (lectura<min){
            min = lectura;
        }
        else if(lectura>max){
            max = lectura;
        }
        contador++;
    }
    cout<<"\nLectura mas alta: "<<max<<endl;
    cout<<"Lectura mas baja: "<<min<<endl;
    system("pause");
    return 0;
}