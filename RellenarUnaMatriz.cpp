/*
Rellenar una matriz pidiendo al usuario 
el numero de filas y columnas. 
Posteriormente mostrar la matriz en pantalla
*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iMatriz[100][100],iFilas,iColumnas;

    cout<<"Ingrese el n\xA3mero de filas: ";
    cin>>iFilas;
    cout<<"Ingrese el n\xA3mero de columnas: ";
    cin>>iColumnas;

    //Almacenando los elementos en la matriz 
    for (int i = 0; i < iFilas; i++)
    {
        for (int j = 0; j < iColumnas; j++)
        {
            cout<<"Ingrese un n\xA3mero ["<<i<<"]["<<j<<"]: ";

            cin>>iMatriz[i][j];

        }//fin for
        
    }//fin for
    
    cout<<"\n";
    
    //Mostrando la matriz

    for (int k = 0; k < iFilas; k++)
    {
        for (int l = 0; l < iColumnas; l++)
        {
            cout<<iMatriz[k][l]	;
        }//fin for

        cout<<"\n";

    }//fin for
    
	getch();

	return 0;
}//fin int main
