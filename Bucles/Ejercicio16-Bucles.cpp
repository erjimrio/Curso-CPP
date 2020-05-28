/*16. Realice un programa que calcule la descomposición en factores primos de un número entero.

Por ejemplo: 20 = 2 * 2 * 5 */

#include<iostream>
#include<stdlib.h>

using namespace std;

// versión del maestro
int main (){
    int numero;
     cout<<"Digite un numero: "; 
     cin>>numero;

    for(int i=2;numero>1;i++){
        while(numero%i==0){
            cout<<i<<" ";
            numero = numero /i;
        }
    }
    cout<<"\n";
    system("pause");
    return 0;
}