/*2. Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int numero, contador = 0;
    cout<<"Digite un numero: ";
    cin>>numero;
    while (numero!=0){
        if (numero>0){
            contador++;
        }
        cout<<"Digite un numero: ";
        cin>>numero;
    }
    cout<<"Total de numeros mayores que 0: "<<contador<<endl;
    system("pause");
    return 0;
}