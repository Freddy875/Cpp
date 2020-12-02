/*
Añadir o concatenar una cadena con otra 
Funcion strcat()
son las siglas en ingles
de string concatenate

*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
    char cadena1[] = "Esto es un cadena";
    char cadena2[] = " de ejemplo";
    char cadena3[30];

    strcat(cadena3,cadena1);
    //cadena3 = Esto es una cadena 

    strcat(cadena3,cadena2);
    //cadena3 = Esto es una cadena de emeplo

    //Imprimir la cadena concatenada
    cout<<cadena1<<endl;
    cout<<cadena2<<endl;
    cout<<cadena3<<endl;

	getch();
	
	return 0;
}//fin int main


