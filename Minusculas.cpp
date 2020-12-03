/*
Pasar una palabra a minusculas
con la función strlwr()
son las siglas en ingles de
string lower que se traduce como
cadena en minusculas 
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
    char sPalabra1[] = "FREDDY";

    //Palabra original

    //cout<<cPalabra1<<endl;

    printf("Palabra original: %s\n", sPalabra1);

    //Palabra en minusculas

    //strlwr(cPalabra1);

    //cout<<cPalabra1<<endl;

    printf("Palabra en minusculas: %s\n", strlwr(sPalabra1));

	return 0;
}//fin int main


