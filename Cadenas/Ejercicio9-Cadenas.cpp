/*Realice un programa que lea una cadena de caracteres de la entrada estándar y muestre en la salida estándar cuántas ocurrencias de cada vocal existen en la cadena*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    char cadena[50];
    int contadorA = 0;
    int contadorE = 0;
    int contadorI = 0;
    int contadorO = 0;
    int contadorU = 0;

    cout<<"Digite una frase: ";
    cin.getline(cadena,50,'\n');

    strupr(cadena);

    for (int i=0; i<strlen(cadena); i++){
        switch(cadena[i]){
            case 'A':
                contadorA +=1;
                break;
            case 'E':
                contadorE +=1;
                break;
            case 'I':
                contadorI +=1;
                break;
            case 'O':
                contadorO +=1;
                break;
            case 'U':
                contadorU += 1;
                break;
            default:
                break;
        }
    }

    cout<<"Ocurrencias de vocales: "<<endl;
    cout<<"A = "<<contadorA<<endl;
    cout<<"E = "<<contadorE<<endl;
    cout<<"I = "<<contadorI<<endl;
    cout<<"O = "<<contadorO<<endl;
    cout<<"U = "<<contadorU<<endl;
    system("pause");
    return 0;
}