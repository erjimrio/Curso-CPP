//Copiar el contenido de una cadena en otra -Función strcpy()

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    char nombre[] = "Alejandro";
    char nombre2[20];

    strcpy(nombre2, nombre); // Destino -> Origen

    cout<<nombre2<<endl;
    system("Pause");
    return 0;
}