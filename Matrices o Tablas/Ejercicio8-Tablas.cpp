/*Realice un programa que calcule el producto de dos matrices cuadradas de 3 x 3 */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){
    int matriz1[3][3];
    int matriz2[3][3];
    int matrizR[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Digite un numero M1 ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriz1[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Digite un numero M2 ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriz2[i][j];
        }
    }
    cout<<"\nLa matriz 1 es:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nLa matriz 2 es:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<endl;
    }
/* mi versión
        matrizR[0][0]=matriz1[0][0]*matriz2[0][0]+matriz1[0][1]*matriz2[1][0]+matriz1[0][2]*matriz2[2][0];
        matrizR[0][1]=matriz1[0][0]*matriz2[0][1]+matriz1[0][1]*matriz2[1][1]+matriz1[0][2]*matriz2[2][1];
        matrizR[0][2]=matriz1[0][0]*matriz2[0][2]+matriz1[0][1]*matriz2[2][1]+matriz1[0][2]*matriz2[2][2];
        matrizR[1][0]=matriz1[1][0]*matriz2[0][0]+matriz1[1][1]*matriz2[1][0]+matriz1[1][2]*matriz2[2][0];
        matrizR[1][1]=matriz1[1][0]*matriz2[0][1]+matriz1[1][1]*matriz2[1][1]+matriz1[1][2]*matriz2[2][1];
        matrizR[1][2]=matriz1[1][0]*matriz2[0][2]+matriz1[1][1]*matriz2[1][2]+matriz1[1][2]*matriz2[2][2];
        matrizR[2][0]=matriz1[2][0]*matriz2[0][0]+matriz1[2][1]*matriz2[1][0]+matriz1[2][2]*matriz2[2][0];
        matrizR[2][1]=matriz1[2][0]*matriz2[0][1]+matriz1[2][1]*matriz2[1][1]+matriz1[2][2]*matriz2[2][1];
        matrizR[2][2]=matriz1[2][0]*matriz2[0][2]+matriz1[2][1]*matriz2[1][2]+matriz1[2][2]*matriz2[2][2];
*/  
// versión profesor
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrizR[i][j]=0;
            for(int k=0;k<3;k++){
                matrizR[i][j]=matrizR[i][j]+matriz1[i][k]*matriz2[k][j];
            }
        }
    }
    cout<<"\nLa matriz resultado es:"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrizR[i][j]<<" ";
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}