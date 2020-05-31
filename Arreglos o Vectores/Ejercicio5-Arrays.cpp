/*5. Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int numeros[100], n,  mayor=0;
    cout<<"Digite numero de elementos: ";
    cin>>n;
    for (int i=0; i<n; i++){
        cout<<i+1<<". Digite un numero: "; // 1.Digite un numero: 
        cin>>numeros[i];

        if (numeros[i] > mayor){
            mayor = numeros[i];
        }
    }
    cout<<"\nEl numero mayor en el vector es: "<<mayor<<endl;

    system ("pause");
    return 0;
}