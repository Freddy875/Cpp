/*
Leer una matriz de 3x3
y luego crear la matriz traspuesta 

Matriz Original
1 2 3 
4 5 6 
7 8 9 

Matriz Traspuesta
1 4 7 
2 5 8 
3 6 9

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iNumero[3][3];

    //Esto es para llenar la matriz original 

    for (int iContador = 0; iContador < 3; iContador++)
    {
        for (int jContador = 0; jContador < 3; jContador++)
        {
            cout<<"\nIngresa el n\xA3mero en la pocisix\xA2n ["<<iContador<<"]["<<jContador<<"]: ";
            cin>>iNumero[iContador][jContador];
        }//fin for
        
    }//fin for

    cout<<"Matriz Original\n";
    for (int iContador = 0; iContador < 3; iContador++)
    {
        for (int jContador = 0; jContador < 3; jContador++)
        {
            cout<<iNumero[iContador][jContador];
        }//fin for
        cout<<"\n";
    }//fin for

    cout<<"Matriz Traspuesta\n";
    for (int iContador = 0; iContador < 3; iContador++)
    {
        for (int jContador = 0; jContador < 3; jContador++)
        {
            cout<<iNumero[jContador][iContador];
        }//fin for
        
        cout<<"\n";
    }//fin for

	getch();

	return 0;
}//fin int main