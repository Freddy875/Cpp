/*
Leer valores enteros hasta que se introduzca 
un valor en el rango [20-30] o se introduzca 
el valor de 0. El programa debe de entregar 
la suma de los valores mayores introducidos 
*/

#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
	
    int iNumero1, iSuma = 0;

    do{

    cout<<"Ingresa un n\xA3mero: ";
    cin>>iNumero1;

        if (iNumero1 > 0){
        
            iSuma += iNumero1;

        }//fin if
    
    } while (((iNumero1<20) || (iNumero1>30)) && (iNumero1 != 0));//fin do-while
    
	cout<<"\nLa suma es: "<<iSuma<<endl;

    system("pause");

	return 0;
}//fin int main
