/*
Escriba una funcion llamada mult() que acepte dos numeros en punto
flotante como parametros, multiplique esos dos numeros y despliegue 
el resultado
*/

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipos de Funciones
void pedirDatos();
void mult(float fNumeroX, float fNumeroY);

float fNumeroX, fNumeroY;

int main(){
	
    pedirDatos();
    mult(fNumeroX,fNumeroY);
	
	getch();
	return 0;
}//fin int main

void pedirDatos(){
    cout<<"Ingresa el primer n\xA3mero: ";
    cin>>fNumeroX;
    cout<<"Ingresa el segundo n\xA3mero: ";
    cin>>fNumeroY;
}//fin void pedirDatos

void mult(float fNumeroX, float fNumeroY){

    float fMultiplicacion = fNumeroX * fNumeroY; 


    cout<<"El resultado de multiplicar "<<fNumeroX<<" por "
    <<fNumeroY<<" es "<<fMultiplicacion<<endl;
}//fin void mult