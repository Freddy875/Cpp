/*
Comparar cadenas
Funcion strcmp()
Son las siglas en ingles 
de string comparation
Se traduce como 
comparar cadenas  
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
    //char cPalabra1[] = "Hola";
    //char cPalabra2[] = "Hola";
	
    char cPalabra1[] = "Avion";
    char cPalabra2[] = "Barco";
	
	if (strcmp(cPalabra1,cPalabra2)==0)
    {
        cout<<"Ambas cadenas son "<<cPalabra1<<" y "<<cPalabra2<< " son iguales"<<endl;
    }else
    {
        cout<<"Ambas cadenas son "<<cPalabra1<<" y "<<cPalabra2<< " son diferentes"<<endl;
    }//fin if-else
    
    

    getch();

	return 0;
}//fin int main

