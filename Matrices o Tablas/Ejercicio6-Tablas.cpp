/*Realice un programa que calcule la suma de dos matrices cuadradas de 3 x 3*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int matriz1[3][3];
    int matriz2[3][3];
    int matrizR[3][3];

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero M1 ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriz1[i][j];
        }
    }
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero M2 ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriz2[i][j];
        }
    }
    cout<<"Mostrando las dos matrices:\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrizR[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    }
    cout<<"La matriz resultado es:"<<endl;

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizR[i][j]<<" ";
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}