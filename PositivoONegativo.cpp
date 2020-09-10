/*
Comprobar si un numero ingresado 
por el usuario es 
positivo o negativo
*/

#include <iostream>

using namespace std;

int main(){
	
    int iNumero;

    cout<<"Ingresa un n\xA3mero (entero): ";

    cin>>iNumero;

    if(iNumero == 0){

        cout<<"Tu  n\xA3mero "<<iNumero<<" es cero";

    }else if(iNumero > 0){

        cout<<"Tu  n\xA3mero "<<iNumero<<" es positivo";

    }else{

        cout<<"Tu  n\xA3mero "<<iNumero<<" es negativo";

    }
	
	
	return 0;
}//fin int main


