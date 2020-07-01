/*2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    char frase[50];
    char frase2[50];
    cout<<"Digite una frase: ";
    cin.getline(frase,50,'\n');

    strcpy(frase2,frase); //Guardando dentro de frase 2 todo lo que hay en frase

    cout<<frase2<<endl;

    system("pause");
    return 0;
}