/* 3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar cuál es mayor alfabéticamente*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    char cadena1[50];
    char cadena2[50];

    cout<<"Escriba una frase: ";
    cin.getline(cadena1,50,'\n');
    cout<<"Escriba otra frase: ";
    cin.getline(cadena2,50,'\n');

    if (strcmp(cadena1,cadena2) == 0){
        cout<<"Ambas cadenas son iguales"<<endl;
    }
    else{
        if (strcmp(cadena1,cadena2) > 0){
            cout<<cadena1<<" es mayor alfabeticamente"<<endl;        
        }
        else{
            cout<<cadena2<<" es mayor alfabeticamente"<<endl;
        }
    }
    system("pause");
    return 0;
}