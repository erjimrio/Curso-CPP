/* 2. Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA. */

#include<iostream>

using namespace std;

int main(){
    int precio;
    float iva;
    cout<<"Digite el precio del producto: "; cin>>precio;
    
    iva=precio+((precio*16)/100);
    cout<<"\nEl precio con iva es: $"<<iva<<endl;
    return 0;
}