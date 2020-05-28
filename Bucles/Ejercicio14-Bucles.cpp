/*14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:

a) Alumnos que aprobaron todos los exámenes.
b) Alumnos que aprobaron almenos un examen.
c) Alumnos que aprobaron únicamente el último examen.

Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

// Mi versión
int main(){
    int alumno1, alumno2, alumno3, alumno4, alumno5, aprob1 = 0, aprob2 = 0, aprob3=0, aprob4=0, aprob5=0, uExam1=0, uExam2=0, uExam3=0, uExam4=0, uExam5=0, todos=0, almenosuno=0, ultimo=0;
    for (int i = 1; i <= 3; i++){
        cout<<"Digite calificacion del alumno 1 para el examen "<<i<<": "; cin>>alumno1;
        cout<<"Digite calificacion del alumno 2 para el examen "<<i<<": "; cin>>alumno2;
        cout<<"Digite calificacion del alumno 3 para el examen "<<i<<": "; cin>>alumno3;
        cout<<"Digite calificacion del alumno 4 para el examen "<<i<<": "; cin>>alumno4;
        cout<<"Digite calificacion del alumno 5 para el examen "<<i<<": "; cin>>alumno5;

        if (i==3){
            if (alumno1>= 6){
                aprob1 +=1;
                uExam1 +=1;
            }
            if (alumno2>= 6){
                aprob2 +=1;
                uExam2 +=1;
            }
            if (alumno3>= 6){
                aprob3 +=1;
                uExam3 +=1;
            }
            if (alumno4>= 6){
                aprob4 +=1;
                uExam4 +=1;
            }
            if (alumno5>= 6){
                aprob5 +=1;
                uExam5 +=1;
            }
        }
        else {
            if (alumno1>= 6){
                aprob1 +=1;
            }
            if (alumno2>= 6){
                aprob2 +=1;
            }
            if (alumno3>= 6){
                aprob3 +=1;
            }
            if (alumno4>= 6){
                aprob4 +=1;
            }
            if (alumno5>= 6){
                aprob5 +=1;
            }
        }
    }
    // Estadísticas todos
    if (aprob1 == 3){
        todos +=1;
    }
    if (aprob2 == 3){
        todos +=1;
    }
    if (aprob3 == 3){
        todos +=1;
    }
    if (aprob4 == 3){
        todos +=1;
    }
    if (aprob5 == 3){
        todos +=1;
    }

// Almenos uno

    if (aprob1 == 1){
        almenosuno +=1;
    }
    if (aprob2 == 1){
        almenosuno +=1;
    }
    if (aprob3 == 1){
        almenosuno +=1;
    }
    if (aprob4 == 1){
        almenosuno +=1;
    }
    if (aprob5 == 1){
        almenosuno +=1;
    }

// unicamente el último

    if (aprob1 == 1 && uExam1 == 1){
        ultimo +=1;
    }
    if (aprob2 == 1 && uExam2 == 1){
        ultimo +=1;
    }
    if (aprob3 == 1 && uExam3 ==1){
        ultimo +=1;
    }
    if (aprob4 == 1 && uExam4 ==1){
        ultimo +=1;
    }
    if (aprob5 == 1 && uExam5 ==1){
        ultimo +=1;
    }

    cout<<"\nEstadisticas alumnos que aprobaron todos los exámenes: "<<todos<<endl;
    cout<<"Estadisticas alumnos que aprobaron almenos un examen: "<<almenosuno<<endl;
    cout<<"Estadisticas alumnos que aprobaron unicamente el ultimo examen: "<<ultimo<<endl;

    system("pause");
    return 0;
}
/*
// Versión del maestro. Acá el maestro considera que los que aprobaron todo, como aprobaron todo confirma que aprobaron almenos 1 y por eso los considera también para esa estadística

int main (){
    float examen1,examen2,examen3;
    int aprobadosTodos=0, aprobadosUno=0, aprobadosUltimo=0;

    for(int i=1; i<=5; i++){
        cout<<i<<". Digite la nota del primer examen: "; cin>>examen1;
        cout<<i<<". Digite la nota del segundo examen: "; cin>>examen2;
        cout<<i<<". Digite la nota del tercer examen: "; cin>>examen3;
        cout<<"\n";

        if (examen1>10.5 &&examen2>10.5&&examen3>10.5){
            aprobadosTodos++;
        }
        if (examen1>10.5 ||examen2>10.5||examen3>10.5){
            aprobadosUno++;
        }
        if(examen1<10.5 &&examen2<10.5&&examen3>10.5){
            aprobadosUltimo++;
        }
    }
    cout <<"\nAlumnos que aprobaron todos los examenes: "<<aprobadosTodos<<endl;
    cout <<"Alumnos que aprobaron almenos un examen: "<<aprobadosUno<<endl;
    cout <<"Alumnos que aprobaron solo el último examen: "<<aprobadosUltimo<<endl;
    
    system("pause");
    return 0;
}*/