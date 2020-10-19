/*
Solicitarle al usuario desde la entrada estandar 
un numero entero del 1 al 10  
y mostrar en salida estandar la tabla de multiplicar 
*/


#include <iostream>

using namespace std;

int main(){
	
    int iNumero1;

    do
    {
        cout<<"Ingresa un n\xA3mero entero (1-10): ";
        
        cin>>iNumero1;

    } while ((iNumero1<=1) || (iNumero1>=10));//fin do-while
    
	for (int iContador = 0; iContador <= 20; iContador++){
        
        cout<<iNumero1<<" x "<<iContador<<" = "<<iNumero1*iContador<<endl;

    }//fin for
    
	
	return 0;
}//fin int main
