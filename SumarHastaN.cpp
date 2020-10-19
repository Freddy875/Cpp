/*
Calcular el valor de:  1 + 2 + 3 + ... +n
*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iNumero,iSuma = 0;
	
    cout<<"Ingresa el n\xA3mero de elementos: ";
    cin>>iNumero;

    for (int i = 1; i <= iNumero; i++){
        
        iSuma += i;
        
    }//fin for
    
    cout<<"\nLa suma es: "<<iSuma<<endl;

    getch();
	
	return 0;
}//fin int main
