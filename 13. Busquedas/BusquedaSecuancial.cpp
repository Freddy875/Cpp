/*
Busqueda secuancial en un arreglo
a[5] = {3,4,2,,1,5}; dato = 4;
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iArreglo[5] = {3,4,2,1,5},
        iContador, iDato;
    
    char cBandera = 'F';

    iDato = 4;

    printf("B%csqueda Secuancial\n",163);

    while ((cBandera == 'F') && (iContador < 5))
    {
        if (iArreglo[iContador] == iDato)
        {
            cBandera = 'V';
        }
        iContador++;
    }//fin while

    if (cBandera == 'F')
    {
        cout<<"\nEl n\xA3mero a buscar no existe en el arreglo"<<endl;
    }else if (cBandera == 'V')
    {
        cout<<"\nEl n\xA3mero ha sido encontrado en la posici\xA2n: "
		<<iContador-1<<endl;
    }//fin if-else

    getch();

	return 0;
}//fin int main


