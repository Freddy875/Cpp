/*
Leer un valor entero y determinar si se trata 
de un numero par o impar 
*/

#include <iostream>

using namespace std;

int main(){
	
    int iNumero;

    cout<<"Ingresa un n\xA3mero (entero): ";

    cin>>iNumero; 

    if (iNumero == 0){

        cout<<"Tu  n\xA3mero "<<iNumero<<" es cero";

    }else if (iNumero%2 == 0){

        cout<<"Tu  n\xA3mero "<<iNumero<<" es par";

    }else{

        cout<<"Tu  n\xA3mero "<<iNumero<<" es impar";

    }//fin if-else
    
    
	
	return 0;
}//fin int main

