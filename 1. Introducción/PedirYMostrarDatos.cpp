/*
Realizar un porgrama que lea en entrada estandar 
los siguinetes datos de una persona:

	Edad: dato de tipo entero
	Sexo: dato de tipo caracter
	Altura en metros: dato de tipo real 

Mostrar los datos leidos en salida estandar
*/

#include <iostream>

using namespace std;

int main(){

	int iEdad;
	char sSexo[20];
	float fAltura;
	
	cout<<"Ingresa tu edad: ";
	cin>>iEdad;
	
	cout<<"Ingresa tu sexo: ";
	cin>>sSexo;
	
	cout<<"Ingresa tu altura (metros): ";
	cin>>fAltura;
	
	cout<<"Edad: "<<iEdad<<endl;
	cout<<"Sexo: "<<sSexo<<endl;
	cout<<"Altura: "<<fAltura<<endl;
	 
	return 0;
}//fin int main


