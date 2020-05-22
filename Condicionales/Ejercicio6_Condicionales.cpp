/*6. Escriba un programa que lea de la entrada estándar un caracter e indique en la salida estándar si el caractér es una vocal minúscula, es una vocal mayúscula o no es una vocal.*/

#include<iostream>
using namespace std;

int main(){
    char letra;

    cout<<"Digite un caracter: "; cin>>letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"\nEs una vocal minuscula"<<endl; break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"\nEs una vocal mayuscula"<<endl; break;
        default: cout<<"\nNo es una vocal"<<endl; break;
    }

    return 0;
}