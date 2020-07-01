/*7. Pedir su nombre al usuario en MAYÚSCULAS, si su nombre comienza con la letra A, convertir su nombre a minúsculas, caso contrario no convertirlo*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    char acNombre[20];

    cout<<"Escriba su nombre en mayusculas: ";
    cin.getline(acNombre,20,'\n');
/*El profesor usó:
if(strncmp(nombre,"A",1)==0)
Lo que hace esta intrucción es comparar una cadena contra la letra A pero solamente la posición 1 de la cadena

El número 1 indica el número de caracteres de la cadena que quiere comparar*/

    if(acNombre[0]=='A'){
        strlwr(acNombre);
    }
    else{
        cout<<"Este nombre no comienza con la letra A"<<endl;
    }
    cout<<acNombre<<endl;
    system("pause");
    return 0;
}