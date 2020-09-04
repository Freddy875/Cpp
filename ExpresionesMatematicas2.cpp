/*
Mostrar el resultado de la expresion 

a +  (b/(c-d))
*/

#include <iostream>

using namespace std;

int main(){
	
    float fNumeroA,
          fNumeroB,
          fNumeroC,
          fNumeroD,
          fResultado = 0;

    cout<<"Este programa te muestra el resultado de la expresi\xA2n"<<endl;
    cout<<"a +  (b/(c-d))"<<endl;
    cout<<"Ingresa el valor de A: ";
    cin>>fNumeroA;
    cout<<"Ingresa el valor de B: ";
    cin>>fNumeroB;
    cout<<"Ingresa el valor de C: ";
    cin>>fNumeroC;
    cout<<"Ingresa el valor de D: ";
    cin>>fNumeroD;
    
    fResultado = fNumeroA +  (fNumeroB/(fNumeroC-fNumeroD));
    
    cout<<"\nEl resultado de la expresi\xA2n es: "<<fResultado<<endl;
    
	return 0;
}//fin int main

