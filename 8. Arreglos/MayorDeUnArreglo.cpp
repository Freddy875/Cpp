/*
Leer en entrada estandar un vector de enteros 
y determine el mayor de los elementos del vector
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iArreglo[100],iNumero,iMayor = 0;

    cout<<"Ingrese el n\xA3mero de elementos del arreglo: ";

    cin>>iNumero;

    for (int i = 0; i < iNumero; i++)
    {
        cout<<i+1<<" . Ingresa un n\xA3mero: ";
        cin>>iArreglo[i];

        if (iArreglo[i] > iMayor )
        {
            iMayor = iArreglo[i];//
        }//fin if-else
        

    }//fin for

    //Ahora mostramos el arreglo

    cout<<"\n";

    for (int j = 0; j < iNumero; j++)
    {
        cout<<iArreglo[j]<<endl;
    }//fin for
    
    cout<<"\nEl mayor elemento del vector es: "<<iMayor<<endl;
    
	getch();
	
	return 0;
}//fin int main
