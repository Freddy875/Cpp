/*
Leer desde la entrada estandar un vector de numeros 
y mostrar en salida estandar los numeros del vector
con sus indices asociados
*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iVectorNumero[100],iNumero;

    cout<<"Ingresa el n\xA3mero de elementos que va a tener el arreglo: ";

    cin>>iNumero;
	
    //Primero guardamos todos los elementos del arreglo

	for (int i = 0; i < iNumero; i++)
    {
        cout<<"Ingresa un n\xA3mero: ";
        cin>>iVectorNumero[i]; //Guardando todos los elementos de vector
    }//fin for 
    
    //Ahora mostramos los elementos con sus indices asociados

    for (int j = 0; j < iNumero; j++)
    {
        
        cout<<j<<" -> "<<iVectorNumero[j]<<endl;


    }//fin for
    

    getch();

	return 0;
}//fin int main
