/*7. Escriba un programa que calcule el valor de :
1+2+3+....+n*/
#include<iostream>
#include<stdlib.h> //La librería conio.h está obsoleta
using namespace std;
int main(){
    int n, sumatoria = 0;
    cout<<"Digite valor de n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        sumatoria = sumatoria + i;
    }
    cout<<"\nLa sumatoria es: "<<sumatoria<<endl;
    system("pause");
    return 0;
}