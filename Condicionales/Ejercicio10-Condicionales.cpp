/*10. Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes al que corresponde. */

#include<iostream>
using namespace std;
int main(){
    int mes;
    cout<<"Digite un numero [1-12]: ";
    cin>>mes;

    switch(mes){
        case 1: cout<<"\nEl mes es enero"<<endl; break;
        case 2: cout<<"\nEl mes es febrero"<<endl; break;
        case 3: cout<<"\nEl mes es marzo"<<endl; break;
        case 4: cout<<"\nEl mes es abril"<<endl; break;
        case 5: cout<<"\nEl mes es mayo"<<endl; break;
        case 6: cout<<"\nEl mes es junio"<<endl; break;
        case 7: cout<<"\nEl mes es julio"<<endl; break;
        case 8: cout<<"\nEl mes es agosto"<<endl; break;
        case 9: cout<<"\nEl mes es septiembre"<<endl; break;
        case 10: cout<<"\nEl mes es octubre"<<endl; break;
        case 11: cout<<"\nEl mes es noviembre"<<endl; break;
        case 12: cout<<"\nEl mes es diciembre"<<endl; break;
        default:
            cout<<"\nValor erroneo"<<endl; break;
    }
    return 0;
}