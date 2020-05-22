/*La sentencia switch condicionales múltiples

    switch(expresion){
        case literal1:
            conjunto de instrucciones1;
            break;
        case literal2:
            conjunto de instrucciones2;
            break;
        case literaln:
            conjunto de instruccionesn;
            break;
        default:
            conjunto de instrucciones por defecto;
            break;
    }
*/
#include<iostream>
using namespace std;

int main(){
    int numero;

    cout<<"Digite un numero entre 1 - 5: ";
    cin>> numero;

    switch(numero)
    {
    case 1:
        cout<<"\nEs el numero 1";
        break;
    case 2:
        cout<<"\nEs el numero 2";
        break;
    case 3:
        cout<<"\nEs el numero 3";
        break;
    case 4:
        cout<<"\nEs el numero 4";
        break;
    case 5:
        cout<<"\nEs el numero 5";
        break;
    default:
        cout<<"No esta en el rango de 1-5";
        break;
    }

    return 0;
}