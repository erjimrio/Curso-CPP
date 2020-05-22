#include<iostream>
using namespace std;

int main(){
    float a,b, resultado=0;
    cout<<"Digite valor de a: ";cin>>a;
    cout<<"Digite valor de b: ";cin>>b;

    resultado = (a/b)+1;

    cout.precision(3); //redondeamos a 2 decimales
    cout<<"\nEl resultado es: "<<resultado<<endl;
    return 0;
}