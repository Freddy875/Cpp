/*
Escribir la expresión 
(a+b)/(c+d)
*/
#include <iostream>

using namespace std;

int main(){
	
	float fNumeroA,
		  fNumeroB,
		  fNumeroC,
		  fNumeroD,
		  fResultado = 0;
		  
	cout<<"Este programa te muestra el resultado de: "<<endl;			
	cout<<"(a+b)/(c+d)"<<endl;
	cout<<"Ingresa el valor de A: ";
	cin>>fNumeroA;
	cout<<"Ingresa el valor de B: ";
	cin>>fNumeroB;
	cout<<"Ingresa el valor de C: ";
	cin>>fNumeroC;
	cout<<"Ingresa el valor de D: ";
	cin>>fNumeroD;
	
	fResultado = (fNumeroA+fNumeroB)/(fNumeroC+fNumeroD);
	
	cout.precision(3);
	cout<<"El resultado es: "<<fResultado<<endl;
	
	return 0;
}//fin int main


