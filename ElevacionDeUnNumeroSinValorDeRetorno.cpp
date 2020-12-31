/*
Escribir una funcion llamada funpot() que eleva un numero entero
que se transmita a una potencia en numero entero positivo y despligue 
el resultado.
El numero entero positivo debera ser el segundo valor
transmitido a la función
*/
#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de funciones 
void pedirDatos();
void funpot(int iNumeroX, int iNumeroY);

int iNumero, iExponente;

int main(){
	
    pedirDatos();
    funpot(iNumero, iExponente);
	
	getch();
	return 0;
}//fin int main

void pedirDatos(){

    cout<<"Ingrese un n\xA3mero: ";
    cin>>iNumero;
    cout<<"Ingresa el exponente de elevaci\xA2n: ";
    cin>>iExponente;
    //Mostrar los dos numeros 
    //cout<<iNumero<<" , "<<iExponente<<endl;

}//fin void pedirDatos

void funpot(int iNumeroX, int iNumeroY){
    long lResultado = 1;
    //Mostrar los dos numeros 
	//cout<<iNumeroX<<" , "<<iNumeroY<<endl;
    for (int i = 1; i <= iNumeroY; i++)
    {
        lResultado *= iNumeroX;
        //Mostrar los resultados
        //cout<<lResultado<<endl;
    }//fin for
    cout<<"El resultado es: "<<lResultado<<endl;
}//fin void funpot
