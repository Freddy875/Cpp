/*
Plantillas de funciones
Sacar el valor absoluto de un numero
*/


#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de Funcion 
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
	
    int iNumero1 = -4;
    float fNumero2 = -56.67;
    double dNumero3 = -123.456789;


    mostrarAbs(iNumero1);
    mostrarAbs(fNumero2);
    mostrarAbs(dNumero3);
	
	getch();
	return 0;
}//fin int main

template <class TIPOD>
void mostrarAbs(TIPOD numero){

    if (numero < 0)
    {
        numero = numero * (-1);

    }//fin if
    
    cout<<"El valor absoluto del numero es: "<<numero<<endl;

}//fin void mostrarAbs