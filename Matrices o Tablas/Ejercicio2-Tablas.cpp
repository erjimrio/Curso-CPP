/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.

1 2 3           1
4 5 6     ->      5
7 8 9               9

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int miTabla[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i == j){
                cout<<miTabla[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    system("pause");
    return 0;
}