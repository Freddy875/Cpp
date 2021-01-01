/*
Devolver valores multiples
Sumar y multiplicar 2 numeros 
*/

#include <iostream>
#include <conio.h>
using namespace std;

void calcular(int, int, int&, int&);

int main(){
	
	int iNumero1,
		iNumero2,
		iSuma = 0,
		iProducto = 0;

		cout<<"Ingresa el primer n\xA3mero: ";
		cin>>iNumero1;
		cout<<"Ingresa el segundo n\xA3mero: ";
		cin>>iNumero2;

		calcular(iNumero1,iNumero2,iSuma,iProducto);

		cout<<"El valor de la suma es: "<<iSuma<<endl;
		cout<<"El valor del producto es: "<<iProducto<<endl;

	getch();
	return 0;
}//fin int main

void calcular(int iNumero1, int iNumero2, int& iSuma, int& iProducto){
	iSuma = iNumero1 + iNumero2;
	iProducto = iNumero1 * iNumero2;
}//fin void calcular