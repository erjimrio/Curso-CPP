//6. Escriba un programa que lea las tres notas de un alumno y calcule la nota final media de dicho alumno.

#include<iostream>
using namespace std;

int main (){
    float nota1, nota2, nota3, media = 0;

    cout<<"Digite la calificacion 1: "; cin>>nota1;
    cout<<"Digite la calificacion 2: "; cin>>nota2;
    cout<<"Digite la calificacion 3: "; cin>>nota3;

    media=(nota1+nota2+nota3)/3;

    cout.precision(2);
    cout<<"\nLa media de las calificaciones es:  "<<media<<endl;
    return 0;
}