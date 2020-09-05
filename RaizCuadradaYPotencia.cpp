/*
Raiz cuadrada y potencia 

Para resolver al expresion matematica

raiz cuadrada de x
sobre y elevada al cuadrado menor uno 
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float fNumeroX,
		fNumeroY,
		fResultado = 0;

		cout<<"Ingresa el primer valor: ";
		
		cin>>fNumeroX;

		cout<<"Ingresa el segundo valor: ";
	
		cin>>fNumeroY;

		fResultado = (sqrt(fNumeroX))/(pow(fNumeroY,2)-1);

		cout<<"\nEl resultado es: "<<fResultado<<endl;
	
	return 0;
}//fin int main


