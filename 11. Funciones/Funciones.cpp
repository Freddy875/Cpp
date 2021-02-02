/*
Funciones
Realizan una tarea en concreto
Puede ser diseñada, implementada y depurada
de manera independiente al resto del codigo

Sintaxis basica de las funciones

directivas del preprocesador

prototipo de funcion 

int main(){
    conjunto de instrucciones 
    return valor
}

definicion de funcion 

tipo nombre( tipo var1, tipo var2...tipo varN){
    conjunto de instrucciones;
}

Ejemplo encontrar el mayor de 2 numeros 
*/


#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de Funcion 

int encontrarMax(int iNumeroX, int iNumeroY);

int main(){
	
    int iNumeroX, iNumeroY, iNumeroMayor; 

    cout<<"Ingresa el primer n\xA3mero: ";
    cin>>iNumeroX;

    cout<<"Ingresa el segundo n\xA3mero: ";
    cin>>iNumeroY;

    iNumeroMayor = encontrarMax(iNumeroX,iNumeroY);

    cout<<"El primer n\xA3mero fue: "<<iNumeroX<<endl;

    cout<<"El segundo n\xA3mero fue: "<<iNumeroY<<endl;

    cout<<"El mayor de ambos n\xA3meros es: "<<iNumeroMayor<<endl;

	getch();
	return 0;
}//fin int main

//Definicion de la funcion 
int encontrarMax(int iNumeroX, int iNumeroY){

    int iNumeroMayor;

    if (iNumeroX > iNumeroY)
    {
        iNumeroMayor = iNumeroX;
    }
    else
    {
        iNumeroMayor = iNumeroY;
    }//fin if-else
    
    return iNumeroMayor;

}//fin funcion encontrarMax
