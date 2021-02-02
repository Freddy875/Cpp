/*
Transofrmar una cadena a numeros
Con las funciones 
atoi() y atof()

"123.45" -> 123.45
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){

    char sCadenaEnteros[] = "123",
         sCadenaFlotante[] = "123.456";  
    int iNumero1;
    float fNumero1;

    iNumero1 = atoi(sCadenaEnteros);

    fNumero1 = atof(sCadenaFlotante);

    //cout<<"La cadena original de enteros es: "<<sCadenaEnteros<<endl;
    //cout<<"Convertido en entero la cadena es: "<<iNumero1<<endl;
    //cout<<"La cadena original de flotantes es: "<<sCadenaFlotante<<endl;
    //cout<<"Despues se conviertio en un numero flotante: "<<fNumero1<<endl;
    
    printf("La cadena original de enteros es: %s\n",sCadenaEnteros);
    printf("Convertido en entero la cadena es: %d\n",iNumero1);
    printf("La cadena original de flotantes es: %s\n",sCadenaFlotante);
    printf("Desp%ces se conviertio en un numero flotante: %.3f\n",163,fNumero1);

    getch();
	return 0;
}//fin int main


