/*8. Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int vec1[5];
    int vec2[5];

    //Definimos elementos del arreglo 1
    for (int i=0; i<5; i++){
        cout<<i+1<<". Digite un numero: ";
        cin>>vec1[i];
    }

    // Hacemos multiplicación y guardamos resultados en el 2o arreglo
    for (int i=0; i<5; i++){
        vec2[i]=vec1[i]*2;
    }
    cout <<"\nMostrando los elementos del arreglo por 2: "<<endl;
    for (int i=0; i<5; i++){
        cout<<vec2[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}