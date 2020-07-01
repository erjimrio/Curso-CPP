//7. Convertir dos cadenas de minúsculas a MAYÚSCULAS. Compararlas, y decir si son iguales o no.

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    char cadena1[20], cadena2[20];

    cout<<"Digite una palabra: ";
    cin.getline(cadena1,20,'\n');
    cout<<"Digite otra palabra: ";
    cin.getline(cadena2,20,'\n');

    //pasando a mayúsculas ambas palabras

    strupr(cadena1);
    strupr(cadena2);

    if(strcmp(cadena1,cadena2)==0){
        cout<<"Ambas palabras son iguales"<<endl;
    }
    else{
        cout<<"Las palabaras son diferentes"<<endl;
    }
    system("pause");
    return 0;
}