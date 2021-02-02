/*
Escriba una plantilla de funcion llamada despliegue()
que despliegue el valor del argumento unico que se 
le transmite cuando es invocada la funcion
*/

#include <iostream>
#include <conio.h>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main(){
	
    int iDato1 = 4;
    float fDato2 = 15.67;
    double dDato3 = 567.7890;
    char cDato4 = 'a';

    despliegue(iDato1);
    despliegue(fDato2);
    despliegue(dDato3);
    despliegue(cDato4);

	getch();
	
	return 0;
}//fin int main

template <class TIPOD>
void despliegue(TIPOD dato){
    cout<<"El dato es: "<<dato<<endl;
}//fin void