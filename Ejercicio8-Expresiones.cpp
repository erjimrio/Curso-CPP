/*8. Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la salida estándar su hipotenusa. */

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a, b, hipotenusa;

    cout<<"Digite el valor del cateto a: "; cin>>a;
    cout<<"Digite el valor del cateto b: "; cin>>b;

    //a = a * a;
    //b = b * b;
    a*=a;
    b*=b;
    
    hipotenusa = sqrt(a+b);

    cout.precision(3);
    cout<<"\nLa hipotenusa es = "<<hipotenusa<<endl;

    return 0;
}