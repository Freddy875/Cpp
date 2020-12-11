/*
Busqueda binaria
*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iNumeros[] = {1,2,3,4,5},
        iInferior,iSuperior,iMitad, 
        iDato;
    
    char cBandera = 'F';

    iDato = 4;

    //Algoritmo de la Busqueda Binaria
    iInferior = 0;
    iSuperior = 5;

    while (iInferior <= iSuperior)
    {
        iMitad = (iInferior+iSuperior)/2;

        if (iNumeros[iMitad] == iDato)
        {
            cBandera = 'V';
            break;
        }//fin if
        if (iNumeros[iMitad] > iDato)
        {
            iSuperior = iMitad;
            iMitad = (iInferior + iSuperior)/2;
        }//fin if
        if (iNumeros[iMitad] < iDato)
        {
            iInferior = iMitad;
            iMitad = (iInferior + iSuperior)/2;
        }//fin if
    }//fin while
    
	//Ahora validamos el estado de la bandera

    if (cBandera == 'V')
    {
        cout<<"El n\xA3mero ha sido encontrado en la posisi\xA2n: "<<iMitad<<endl;
    }else
    {
        cout<<"El n\xA3mero NO ha sido encontrado"<<endl;
    }
    
    getch();
	
	return 0;
}//fin int main


