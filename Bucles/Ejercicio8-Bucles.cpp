/*8. Escriba un programa que calcule el valor de: 1+3+5+..+2n-1*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n, sumatoria = 0;

    cout<<"Digite valor de n: ";
    cin>>n;
    /*Mi versión del FOR
    for (int i=1; i<=n; i++){
        sumatoria = sumatoria + (2*i-1);
        //cout<<sumatoria<<endl;
    }*/
    //Versión del profesor
        for (int i=1; i<=(2*n-1); i+=2){ //Como se trata de la suma de números impares
        sumatoria+= i;
        cout<<sumatoria<<endl;
        }
    cout<<"\nSumatoria= "<<sumatoria<<endl;

    system("pause");
    return 0;
}