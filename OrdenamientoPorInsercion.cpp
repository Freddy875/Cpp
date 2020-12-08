/*
Ordenamiento por  Insercion
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iNumeros[] = {4,2,3,1,5},
        iContador, iPos, iAux;

    //Orden original

    cout<<"Orden original del arreglo"<<endl;

    for (iContador = 0; iContador < 5; iContador++)
    {
        cout<<iNumeros[iContador]<<" ";
    }//fin for del arreglo original
    

    //Ordenamiento por In
    for (iContador = 0; iContador < 5; iContador++)
    {
        iPos = iContador;
        iAux = iNumeros[iContador];

        while ((iPos>0) && (iNumeros[iPos-1]>iAux))
        {
            iNumeros[iPos] = iNumeros[iPos-1];
            iPos--;
        }iNumeros[iPos] = iAux;
        //fin while
    }//fin for 
    
    cout<<"\nOrden ascendente del arreglo"<<endl;
    
    for ( iContador = 0; iContador < 5; iContador++)
    {
        cout<<iNumeros[iContador]<<" ";
    }//fin for

    cout<<"\nOrden descendnete del arreglo"<<endl;

    for (iContador = 4; iContador >= 0; iContador--)
    {
        cout<<iNumeros[iContador]<<" ";
    }//fin for  

    getch();
	
	return 0;
}//fin int main


