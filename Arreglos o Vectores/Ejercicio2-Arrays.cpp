//2. Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int numeros[] = {1,8,3,5,5};
    int multiplicacion = 1;
    
    for (int i=0; i<5; i++){
        multiplicacion *= numeros[i];
    }
    cout<<"La multiplicacion acumulada es: "<<multiplicacion<<endl;
    system("pause");
    return 0;
}