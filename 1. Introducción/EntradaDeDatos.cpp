//Lectura o entrada de datos 

#include <iostream>

/*
Caracteres especiales en C++
a-> \xA0
e-> \x82
i-> \xA1
o-> \xA2
u-> \xA3
ñ-> \xA4
Ñ-> \xA5
*/

using namespace std;

int main(){
	
	int iNumero1; //Define la variable 
	
	cout<<"Ingresa un n\xA3mero (entero): ";
	
	cin>>iNumero1; //Guardando la variable 
	
	cout<<"\nEl n\xA3mero que ingresaste es: "<<iNumero1<<endl;

	float fNumero1;
	
	cout<<"Ingresa otro n\xA3mero (real): ";
	
	cin>>fNumero1;
	
	cout<<"\nEl n\xA3mero que ingresaste es: "<<fNumero1<<endl;
	
	return 0;
}//fin int main
