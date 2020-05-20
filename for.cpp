/*La sentencia for
    for(expr1; exprsión lógica; expr2){
        conjunto de instrucciones;
    }
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    //int i; declaramos la variable fuera del bucle

    for(int i=1; i<=10; i++){ //declaramos la variable dentro del bucle
        cout<<i<<endl;
    }
    getch();
    return 0;
}