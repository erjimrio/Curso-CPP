/*6. Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int numeros[]={1,4,3,10,2};
    int suma=0, mayor=0;
    
    for (int i=0; i<5; i++){
        suma += numeros[i];

        if (numeros[i] > mayor){
            mayor = numeros[i];
        }
    }

    if (mayor == suma - mayor){
        cout<<"\nEl numero "<<mayor<<" equivale a la suma de los demas numeros del vector"<<endl;
    }
    else{
        cout<<"\nNo hay un numero que equivalga a la suma del resto"<<endl;
    }

    system ("pause");
    return 0;
}