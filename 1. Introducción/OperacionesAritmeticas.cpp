/*
Leer en entrada estandar dos numeros 
y muestre en salida estandar 
su suma, resta, multiplicación y división 
*/

#include <iostream>

using namespace std;

int main(){

	int iNumero1,
		iNumero2,
		iSuma = 0,
		iResta = 0,
		iMult = 0,
		iDiv = 0;
	
	cout<<"Ingresa el primer n\xA3mero: ";
	
	cin>>iNumero1;
	
	cout<<"\nIngresa el segundo n\xA3mero: ";
	
	cin>>iNumero2;
	
	iSuma = iNumero1 + iNumero2;
	
	iResta = iNumero1 - iNumero2;
	
	iMult = iNumero1 * iNumero2;
	
	iDiv = iNumero1/iNumero2;
		
	cout<<"\nLa suma es: "<<iSuma<<endl;
	
	cout<<"\nLa resta es: "<<iResta<<endl;
	
	cout<<"\nLa multiplicac\xA2n es: "<<iMult<<endl;
	
	cout<<"\nLa divisi\xA2n es: "<<iDiv<<endl;
		
	return 0;

}//fin int main


