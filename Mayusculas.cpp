/*
Pasar una palabra a MAYUSCULAS
con la función strupr()
son las siglas en ingles de
string upper que se traduce como
cadena en mayusculas 
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
    char sPalabra1[] = "freddy";

    //Palabra original

    printf("Palabra original: %s\n", sPalabra1);

    //cout<<cPalabra1<<endl;

    //strupr(cPalabra1);

    //Palabra en Mayusculas

    //cout<<cPalabra1<<endl;

    printf("Palabra en Mayusculas: %s\n", strupr(sPalabra1));

    getch();
	
	return 0;
}//fin int main


