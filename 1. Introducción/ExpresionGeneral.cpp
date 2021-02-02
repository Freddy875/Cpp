/*
Calcular la expresion general con la formula 
-b+/- raiz cuadrada de b al cuadrado - 4ac
sobre 2 a
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
    float fNumeroA,
        fNumeroB,
        fNumeroC,
        fResultadoMas = 0,
        fResultadoMenos = 0;

    cout<<"Este programa te ayuda a resolver ecuciones de segundo grado"<<endl;
    cout<<"Con la ecuacion general (La Cicharronera)"<<endl;
    cout<<"Ingresa el valor de A: ";
    cin>>fNumeroA;
    cout<<"Ingresa el valor de B: ";
    cin>>fNumeroB;
    cout<<"Ingresa el valor de C: ";
    cin>>fNumeroC;

    fResultadoMas = (-(fNumeroB) + sqrt(pow(fNumeroB,2)-(4*fNumeroA*fNumeroC)))/(2*fNumeroA);

    fResultadoMenos = (-(fNumeroB) - sqrt(pow(fNumeroB,2)-(4*fNumeroA*fNumeroC)))/(2*fNumeroA);
    
    cout<<"Una ecuaci\xA2n de segundo grado tiene dos posibles resultados"<<endl;

    cout<<"El primer resultado de tu ecuaci\xA2n es: "<<fResultadoMas<<endl;

    cout<<"El segundo resultado de tu ecuaci\xA2n es: "<<fResultadoMenos<<endl;

    
	return 0;
}//fin int main

