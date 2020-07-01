//Transformar una cadena a números - Función atoi() y atof()

//"123" ---> 123  con la función atoi() convierte la cadena a enteros
//"123.45" ---> 123.45 con la función atof() convierte la cadena a números flotantes

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    char cad[] = "123.456";
    //int numero;
    float numero;
    numero = atof(cad);

    cout<<numero<<endl;

    system("pause");
    return 0;
}