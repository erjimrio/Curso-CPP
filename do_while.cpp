/*La sentencia do while

    do{
        conjunto de instrucciones;
    }while (expresión lógica);
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int i;
    i = 1;

    do{
        cout<<i<<endl;
        i++; // Aumenta el iterador de uno en uno
    } while (i<=10);

    system("pause"); //funciona igual que el getch para pausar la consola y evitar que se cierre automáticamente la ventana.
    return 0;
}