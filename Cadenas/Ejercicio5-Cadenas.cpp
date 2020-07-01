//5. Hacer un programa que determine si una palabra es políndroma

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    char cadena1[30];
    char cadena2[30];

    cout<<"Digite una palabra: ";
    cin.getline(cadena1,30,'\n');

    strcpy(cadena2,cadena1);
    strrev(cadena2);

    if (strcmp(cadena1,cadena2)==0){
        cout<<cadena1<<" es una palabara polindroma"<<endl;
    }
    else{
        cout<<cadena1<<" NO es una palabara polindroma"<<endl;
    }
    system("pause");
    return 0;
}