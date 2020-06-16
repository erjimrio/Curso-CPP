/*5. Realice un programa que lea una matriz 3x3 y cree su matriz transpuesta. La matriz transpuesta es aquella en la que la columna i era la fila i de la matriz original
|1 2 3|         |1 4 7|
|4 5 6|   ->    |2 5 8|
|7 8 9|         |3 6 9|
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int matriz[3][3];
    int matrizt[3][3];

    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"Esta es la matriz original:"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nEsta es la matriz transpuesta:"<<endl;

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            matrizt[i][j]=matriz[j][i];
        }
    }
// Imprimimos matriz transpuesta

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<matrizt[i][j]<<" ";
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}