/*7. Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    char vec1[]={'a','b','c','d','e'};
    char vec2[]={'f','g','h','i','j'}; 
    char vec3[10];

    // Copiando los elementos de vec1 en vec3

    for (int i =0; i<5; i++){
        vec3[i] = vec1[i];
    }
    // Copiando los elementos de vec2 en vec3
    for (int i =0; i<5; i++){
        vec3[i+5] = vec2[i];
    }
    // imprimiendo vec3
        for (int i =0; i<10; i++){
        cout<<"["<<i<<"] -> "<<vec3[i]<<endl;
    }
    system("pause");
    return 0;
}