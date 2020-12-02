/*
Invertir una cadena 
con la función strrev()
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

    strrev(cadena1);

    cout<<cadena1<<endl;
	
    getch();

	return 0;
}//fin int main


