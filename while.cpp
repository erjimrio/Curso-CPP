/* La sentencia while:
    while (expresión lógica){
        conjunto de instrucciones;
    }
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int i;

    i=10;

    while(i>=1){
        cout<<i<<endl;
        //i++; // i = i + 1 o i += 1
        i--;
    }
    getch(); // para que no se cierre la ventana de consola al correr el ejecutable
    return 0;
}