/*8. Pedir al usuario 2 cadenas de caracteres de números, uno entero y el otro real, convertirolos a sus respectivos valores y por último sumarlos*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main (){
    char ciCadena1[20], cfCadena2[20];
    int iiNum1;
    float ffNum2;
// Guardar los números como cadenas

    cout<<"Digite un numero entero: ";
    cin.getline(ciCadena1,20,'\n');
    cout<<"Digite un numero flotante: ";
    cin.getline(cfCadena2,20,'\n');

//Convertimos las cadenas en números

    iiNum1 = atoi(ciCadena1);
    ffNum2 = atof(cfCadena2);

    cout<<iiNum1<<" + "<< ffNum2 <<" = "<< iiNum1+ffNum2<<endl;

    system("pause");
    return 0;
}