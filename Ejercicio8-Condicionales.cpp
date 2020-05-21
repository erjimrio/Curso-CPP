/*8. Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad.*/

#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3, num4;

    cout<<"\nIntroduce 3 numeros: "; cin>>num1>>num2>>num3;
    
    cout<<"\nIntroduce un cuarto numero: "; cin>>num4;

    if (num4 == num1 || num4 == num2 || num4 == num3){
        cout<<"\nEl cuarto numero coincide almenos con uno de los numeros antes introducidos"<<endl;
    } 
    else{
        cout<<"\nEl cuarto numero no coincide con los numeros introducidos"<<endl;
    }
    return 0;
}