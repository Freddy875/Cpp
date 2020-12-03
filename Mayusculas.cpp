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
	
    char cPalabra1[] = "freddy";

    strupr(cPalabra1);

    cout<<cPalabra1<<endl;

	
	
	return 0;
}//fin int main


