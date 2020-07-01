// Comparar cadenas - Función strcmp()

// strcmp también identifica cual de las cadenas es mayor que otra

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    char palabara1[] = "becerro";
    char palabara2[] = "avion";
    
    /*
    char palabara1[] = "Hola";
    char palabara2[] = "hola";

    if (strcmp(palabara1, palabara2)!=0){ // 0 son iguales , 1 son diferentes
        cout<<"Ambas cadenas son diferentes"<<endl;
    }*/

    if (strcmp(palabara1, palabara2)>0){
        cout<<palabara1<<" esta despues alfabeticamente"<<endl;
    }
    system("pause");
    return 0;
}