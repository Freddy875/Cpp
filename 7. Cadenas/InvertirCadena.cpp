/*
Invertir una cadena 
con la funcion strrev()
son la siglas en ingles de 
string reserve
que se traduce como
invertir una cadena
*/


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
    char cadena1[] = "reconocer";
    
    cout<<"Cadena original "<<cadena1<<endl;

    strrev(cadena1);
    
    cout<<"Cadena invertida "<<cadena1<<endl;
	
    getch();

	return 0;
}//fin int main


