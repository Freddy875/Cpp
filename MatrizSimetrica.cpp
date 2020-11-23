/*
Determinar si una matriz es simetrica o no 
Una matriz es simetrica si es cuadrada 
y si es igual a si es igual a su matriz 
traspuesta

|8 1 3 |        |8 1 3 |
|1 7 4 |  -->   |1 7 4 | 
|3 4 9 |		|3 4 9 |                

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iNumero[100][100], iFilas, iColumnas;
    char cBandera = 'F'; //Esto es una bandera

    cout<<"Ingresa el n\xA3mero de filas: ";
    cin>>iFilas;
    cout<<"Ingresa el n\xA3mero de columnas: ";
    cin>>iColumnas;

    //Para llenar la matriz

    for (int iContador = 0; iContador < iFilas; iContador++){
        for (int jContador = 0; jContador < iColumnas; jContador++){
            cout<<"Ingresa un n\xA3menro ["<<iContador<<"]["<<jContador<<"]: ";
            cin>>iNumero[iContador][jContador];
        }//fin for para las columnas
    }//fin for iFila para las filas

    cout<<"\nMatriz Original\n";

    for (int iContador = 0; iContador < iFilas; iContador++)
    {
        for (int jContador = 0; jContador < iColumnas; jContador++)
        {
            cout<<iNumero[iContador][jContador];
        }//fin for para las columnas
        cout<<"\n";      
    }//fin for para filas
    

    cout<<"\nMatriz Traspuesta\n";

    //Imprimir la matriz traspuesta
    for (int iContador = 0; iContador < iFilas; iContador++)
    {
        for (int jContador = 0; jContador < iColumnas; jContador++)
        {
            cout<<iNumero[jContador][iContador];
        }//fin for para las columnas
        cout<<"\n";       
    }//fin for para filas

    
	if (iFilas == iColumnas){
        for (int iContador = 0; iContador < iFilas; iContador++){
            for (int jContador = 0; jContador < iColumnas; jContador++){
                if (iNumero[iContador][jContador] == iNumero[jContador][iContador]){
                    cBandera = 'V';
                }//fin if para decidir si es igual la matriz original a su maris traspuesta
            }//fin for para las columnas
        }//fin for iFila para las filas
    }//fin if para evaluar si el numero de filas es igual al numero de columnas

    //Imprimir la matriz original

    
    if(cBandera == 'V'){
        
        cout<<"\nLa matriz es simetrica";

    }else{
        
        cout<<"\nLa matriz NO es simetrica";

    }//fin if-else
    
    

	return 0;
}//fin int main

