/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin usar la función pow. */

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int x, y, resultado=1;

    do{
        cout<<"Digite valor de x: ";
        cin>>x;
        cout<<"Digite valor de y: ";
        cin>>y;
    }while((x<=0) || (y<=0));

    for (int i=1; i<=y; i++){

        resultado = resultado * x;
        //cout<<resultado<<endl;
    }

    cout<<"\nEl resultado es: "<<resultado<<endl;

    system("pause");
    return 0;
}