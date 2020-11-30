/*
Logitud de una cadena de caracteres
Funcion strlen() son las siglas en 
ingles String Length
que se traduce como 
longitud de cadena 
*/

#include <iostream>
#include <conio.h>
#include <string.h>


using namespace std;

int main(){
	
    char cPalabra [] = "Hola que tal ?  ";
    int iLongitud = 0;

    iLongitud = strlen(cPalabra);

    cout<<"La palabra es: "<<cPalabra<<" y el n\xA3mero de elementos que tiene es: "<<iLongitud<<endl;
	
	getch();

	return 0;
}//fin int main
