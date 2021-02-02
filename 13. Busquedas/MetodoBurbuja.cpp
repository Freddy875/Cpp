/*
Metodo Burbuja - Algoritmo de ordenamiento 
Revisa cada elementos de la lista que va a ser 
ordenado intercambaindolos de posición 
si estan en el orden equivocado
Revisa todas las veces toda la lista 
hasta que no se necesiten más intercambios
Lo cual significa que la lista esta ordenada
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iNumeros[] = {4,1,2,3,5};

    int iContador, jContador, iAux;

    //Orden original del arreglo

    cout<<"Orden original del arreglo"<<endl;

    for (iContador = 0; iContador < 5; iContador++)
    {
        cout<<iNumeros[iContador]<<" ";



    }//fin for
    

    //Algoritmo de metodo burbuja
    for ( iContador = 0; iContador < 5; iContador++)
    {
        for ( jContador = 0; jContador < 5; jContador++)
        {
            if (iNumeros[jContador] > iNumeros[jContador+1])
            {
                iAux = iNumeros[jContador];
                iNumeros[jContador] = iNumeros[jContador+1];
                iNumeros[jContador+1] = iAux;
            }//fin if
            
        }//fin for
        
    }//fin for

    //Mostrar el orden ascendente del arreglo 

    cout<<"\nOrden ascendente del arreglo"<<endl;
    
    for ( iContador = 0; iContador < 5; iContador++)
    {
        cout<<iNumeros[iContador]<<" ";
    }//fin for

    //Orden descendnete del arreglo

    cout<<"\nOrden descendnete del arreglo"<<endl;

    for (iContador = 4; iContador >= 0; iContador--)
    {
        cout<<iNumeros[iContador]<<" ";
    }//fin for
    
    getch();

	return 0;
}//fin int main


