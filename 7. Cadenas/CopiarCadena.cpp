//Copiar el contenido de una cadena a otra cadena
//Con la funcion strcpy()
//Son las siglas en ingles de 
//String copy
//Que se traduce como copia de cadena o copiar cadena 


#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
    char cNombre1[] = "Freddy";
    char cNombre2[20];

    strcpy(cNombre2,cNombre1);
	
    cout<<"Nombre original es: "<<cNombre1<<endl;
	printf(" y desp%ces de copiar la cadena: %s ",163, &cNombre2);
	
    getch();

	return 0;
}//fin int main
