/*Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.

|8 1 3|     |8 1 3|
|1 7 4| ->  |1 7 4|
|3 4 9|     |3 4 9|
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;
    char band='F'; // Bandera

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;

    for(int i=0;i<filas;i++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un numero ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>numeros[i][j];
        }
    }
    if(filas==columnas){
        for(int i=0;i<filas;i++){
            for(int j=0;j<columnas;j++){
                if(numeros[i][j]==numeros[j][i]){
                    band='V';
                }
            }
        }
    }
    if (band == 'V'){
        cout<<"\nLa matriz es simetrica"<<endl;
    }
    else{
        cout<<"\nLa matriz no es simetrica"<<endl;
    }
 /* Mi versión   
    int matriz[100][100];
    int matrizt[100][100];
    int nFilas, nColumnas, contador = 0;

    cout<<"Digite numero de filas de la matriz: "; cin>>nFilas;
    cout<<"Digite numero de columnas de la matriz: "; cin>>nColumnas;

    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nColumnas;j++){
            cout<<"Digite un numero ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriz[i][j];
        }
    }

// verificando si es matriz cuadrada
    if (nFilas == nColumnas){
        // sacando matriz transpuesta
        for(int i=0; i<nFilas;i++){
            for(int j=0; j<nColumnas;j++){
                matrizt[i][j]=matriz[j][i];
            }
        }
        // Comparando matrices
        for(int i=0; i<nFilas;i++){
            for(int j=0; j<nColumnas;j++){
                if (matriz[i][j]==matrizt[i][j]){
                    contador++;
                };
            }
        }
        if (contador == nFilas*nColumnas){
            cout<<"\nLa matriz es simetrica"<<endl;
        }
        else{
            cout<<"\nLa matriz no es simétrica"<<endl;
        }
    }
    else {
        cout<<"\nLa matriz no es simétrica"<<endl;
    }*/
    system("pause");
    return 0;
}