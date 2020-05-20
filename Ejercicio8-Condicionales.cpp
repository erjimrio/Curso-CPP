/*8. Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad.*/

#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3, num4;

    cout<<"Introduce num1: "; cin>>num1;
    cout<<"Introduce num2: "; cin>>num2;
    cout<<"Introduce num3: "; cin>>num3;
    cout<<"Introduce num4: "; cin>>num4;

    if (num4 == num1 or num4 == num2 or num4 == num3){
        cout<<"num4 coincide con uno de los numeros antes introducidos";
    } 
    else{
        cout<<"num4 no coincide con los numeros introducidos";
    }
    return 0;
}