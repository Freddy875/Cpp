/*
Mostrar el resultado de la expresion 

(a +  (b/c))/(d + (e/f))
*/

#include <iostream>

using namespace std;

int main(){
	
    float fNumeroA,
          fNumeroB,
          fNumeroC,
          fNumeroD,
          fNumeroE,
          fNumeroF,
          fResultado = 0;

    cout<<"Este programa te muestra el resultado de la expresi\xA2n"<<endl;
    cout<<"(a +  (b/c))/(d + (e/f))"<<endl;
    cout<<"Ingresa el valor de A: ";
    cin>>fNumeroA;
    cout<<"Ingresa el valor de B: ";
    cin>>fNumeroB;
    cout<<"Ingresa el valor de C: ";
    cin>>fNumeroC;
    cout<<"Ingresa el valor de D: ";
    cin>>fNumeroD;
    cout<<"Ingresa el valor de E: ";
    cin>>fNumeroE;
    cout<<"Ingresa el valor de F: ";
    cin>>fNumeroF;

    fResultado = (fNumeroA +  (fNumeroB/fNumeroC))/(fNumeroD + (fNumeroE/fNumeroF));
    
    cout<<"\nEl resultado de la expresi\xA2n es: "<<fResultado<<endl;
    
	return 0;
}//fin int main

