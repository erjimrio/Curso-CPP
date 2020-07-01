// Cadenas de caracteres

# include<iostream>
# include<stdlib.h>
# include<string.h>

using namespace std;

int main(){
    char palabra[]="Alejandro";
    char palabra2[]={'A','l','e','j','a','n','d','r','o'};
    char nombre[30];

    cout<<"Digite su nombre: ";
    //cin>>nombre; //cin no sirve para guardar cadenas porque se corta al encontrar un espacio en blanco
    //gets(nombre);
    //fgets(nombre,30,stdin); // Opción 1 para reemplazar gets
    cin.getline(nombre,30,'\n'); // Opción 2 para reemplazar gets
    cout<<nombre<<endl; 
    cout<<palabra<<endl;
    cout<<endl;
    cout<<palabra2<<endl;
    system("pause");
    return 0;
}