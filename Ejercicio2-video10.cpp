/*10. Escriba unprograma que calcule las soluciones de una ecuación de segundo grado de la forma ax^2+bx+c=0, teniendo en cuenta que: */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a, b, c, x1 = 0, x2 = 0;

    cout<<"Digite valor de a: "; cin>>a;
    cout<<"Digite valor de b: "; cin>>b;
    cout<<"Digite valor de c: "; cin>>c;

    x1 = (-(b)+sqrt((pow(b,2)-(4*a*c))))/(2*a);

    x2 = (-(b)-sqrt((pow(b,2)-(4*a*c))))/(2*a);

    cout<<"\nSolucion x1 = "<<x1<<endl;
    cout<<"\nSolucion x2 = "<<x2<<endl;
    return 0;
}