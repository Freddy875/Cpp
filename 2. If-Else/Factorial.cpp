/*
El factorial de un numero
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
    int iNumero1, iFactorial =1;

    cout<<"Ingresa un n\xa3mero: ";
    
    cin>>iNumero1;

    if (iNumero1 > 0){
        for (int iContador = 1; iContador <= iNumero1 ; iContador++){
        
        iFactorial = iFactorial * iContador;

        }//fin for
    
	    cout<<"\nEl factorial es: "<<iFactorial<<endl;

    }else{
        cout<<"El n\xA3mero no puede ser negativo ni cero";
    }//fin if-else
    
    system("pause");
	
	return 0;
}//fin int main
