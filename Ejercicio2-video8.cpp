//6. Escriba un programa que lea la nota final de 4 alumnos y calcule la nota final media de los cuatro alumnos.

#include<iostream>
using namespace std;

int main (){
    float alumno1, alumno2, alumno3, alumno4, media = 0;

    cout<<"Digite la calificación del alumno 1: "; cin>>alumno1;
    cout<<"Digite la calificación del alumno 2: "; cin>>alumno2;
    cout<<"Digite la calificación del alumno 3: "; cin>>alumno3;
    cout<<"Digite la calificación del alumno 4: "; cin>>alumno4;

    media=(alumno1+alumno2+alumno3+alumno4)/4;

    cout.precision(2);
    cout<<"\nLa media de las calificaciones es:  "<<media<<endl;
    return 0;
}