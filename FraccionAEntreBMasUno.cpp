//Escribir la expresion (a/b)+1

#include <iostream>

using namespace std;

int main(){

	float fNumeroA,fNumeroB,fResultado = 0;
	
	cout<<"Ingresa el primer valor: ";
	cin>>fNumeroA;
	
	cout<<"Ingresa el segundo valor: ";
	cin>>fNumeroB;
	
	fResultado = (fNumeroA/fNumeroB) + 1;
	
	cout.precision(2);
	cout<<"El resultado es: "<<fResultado<<endl;
	
	return 0;
}//fin int main


