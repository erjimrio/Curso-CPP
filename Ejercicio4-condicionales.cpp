/*4. Comprobar si un número digitado por el usuario es positivo o negativo*/

#include<iostream>
using namespace std;
int main (){
    int numero;
    cout<<"Digite un numero: "; cin>>numero;
    if (numero == 0){
        cout<<"\nEl numero es cero"<<endl;
    }
    else if (numero<0){
        cout<<"\nEl numero es negativo"<<endl;
    }
    else{
        cout<<"\nEl numero es positivo"<<endl;
    }
    return 0;
}