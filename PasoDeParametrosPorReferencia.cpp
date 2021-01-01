/*
Paso de parametros por Referencia
Paso por valor quiere decir que es un capia del valor
Paso por referencia quiere decir que le pasa la dirección
donde se encuentra el valor 
*/
#include <iostream>
#include <conio.h>
using namespace std;

void valNuevo(int&,int&);

int main(){
	
    int iNumero1, iNumero2;
    
    cout<<"Ingresa el primer n\xA3mero: ";
    cin>>iNumero1;
    cout<<"Ingresa el segundo n\xA3mero: ";
    cin>>iNumero2;

	valNuevo(iNumero1,iNumero2);

    cout<<"El nuevo valor del primer n\xA3mero es: "<<iNumero1<<endl;
    cout<<"El nuevo valor del segundo n\xA3mero es: "<<iNumero2<<endl;
	
	return 0;
}//fin int main

void valNuevo(int& iNumero1, int& iNumero2 ){
    cout<<"El valor del primer n\xA3mero es: "<<iNumero1<<endl;
    cout<<"El valor del segundo n\xA3mero es: "<<iNumero2<<endl;

    iNumero1 = 89;
    iNumero2 = 45;
}//fin void