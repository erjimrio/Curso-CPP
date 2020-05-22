/*4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la más alta y la más baja. */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int contador = 0;
    float lectura, media=0, max=0, min=999;
    for (int i=0; i<24; i+=4){
        cout<<"Lectura de temperatura de las "<<i<<" hrs: ";
        cin>>lectura;
        if (lectura<min){
            min = lectura;
        }
        else if(lectura>max){
            max = lectura;
        }
        media+=lectura;
        contador++;
    }
    cout<<"\nTemperatura media: "<<(media/6)<<endl;
    cout<<"Temperatura mas alta: "<<max<<endl;
    cout<<"Temperatura mas baja: "<<min<<endl;
    system("pause");
    return 0;
}