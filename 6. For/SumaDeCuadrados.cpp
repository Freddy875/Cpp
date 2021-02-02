/*
Calcular y mostrar en salida estandar 
la suma de los 10 primeros numeros 
enteros mayores que cero
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iSuma =  0, iCuadrado;

	for (int i = 1; i <= 10; i++){

        iCuadrado = i * i;

        cout<<iCuadrado<<endl;

        iSuma += iCuadrado; 

        cout<<iSuma<<endl;

    }//fin for

    cout<<"El resultado de la suma es: "<<iSuma<<endl;
    
    getch();

	return 0;
}//fin int main
