/*
Calcular el valor de 2^1+2^2+2^3+...+2^n
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
	
    int iSuma = 0, iElevacion = 0,iNumero;

    cout<<"Ingresa el n\xa3mero de elementos a sumar: ";
    cin>>iNumero;

    for (int i = 1; i <= iNumero; i++){
        
        iElevacion = pow(2,i);
        
        iSuma += iElevacion;
    
    }//fin for
    

    cout<<"\nLa suma total es: "<<iSuma<<endl;
	
    system("pause");
    
	return 0;
}//fin int main
