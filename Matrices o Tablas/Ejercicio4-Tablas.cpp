/*4. Hacer una matriz preguntándo al usuario el número de filas y columnas, llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla. */

#include<iostream>
#include<stdlib.h> // Se requiere también para números aleatorios
#include<time.h> // Se requiere también para números aleatorios

using namespace std;
int main(){
    int matriz[100][100]; // Como no sé las dimensiones asumimos 100 x 100
    int matriz2[100][100]; // Como no sé las dimensiones asumimos 100 x 100
    int columnas, filas;
    srand(time(NULL)); // genera un número aleatorio
    // dato = 1 + rand() % (100);

    cout<<"Digite el numero de filas que tendra la matriz: "; cin>>filas;
    cout<<"Digite el numero de columnas que tendra la matriz: "; cin>>columnas;

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            matriz[i][j]= 1 + rand() % (100); //Generando números aleatorios (1-100)
        }
    }
// Copia matriz

    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            matriz2[i][j]= matriz[i][j];
        }
    }

// imprime matriz nueva
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}
