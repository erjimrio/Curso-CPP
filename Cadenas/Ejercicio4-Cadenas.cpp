/*4. Crear una cadena que tenga la siguiente frase: "Hola que tal", luego crear otra cadena para preguntarle al usuario su nombre, por último añadir el nombre al final de la primer cadena y mostrar el mensaje completo "Hola que tal (NombreDelUsuario)" .*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    char cad1[]="Hola que tal ";
    char cad2[30];

    cout<<"Digite su nombre: ";
    cin.getline(cad2,30,'\n');

    strcat(cad1,cad2); // Concatenando las 2 cadenas
    cout<<cad1<<endl;
    system("pause");
    return 0;
}