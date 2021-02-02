
/*
Leer desde entrada estandar 
una cadena de caracteres
y mostrar en salida estandar 
cuántas ocurrencias de cada 
vocal existen en la cadena  
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
    char sFrase[30];

    int iVocal_a=0,
        iVocal_e=0,
        iVocal_i=0,
        iVocal_o=0,
        iVocal_u=0,
        iVocal_A=0,
        iVocal_E=0,
        iVocal_I=0,
        iVocal_O=0,
        iVocal_U=0;

    cout<<"Ingresa una frase [30 caracteres]: ";
    cin.getline(sFrase,30,'\n');
	
	
    for (int iContador = 0; iContador < 30; iContador++)
    {
        switch (sFrase[iContador])
        {
        case 'a':
            iVocal_a++;
        break; //Fin a
        
        case 'e':
            iVocal_e++;
        break; //Fin e

        case 'i':
            iVocal_i++;
        break; //Fin i

        case 'o':
            iVocal_o++;
        break; //fin o

        case 'u':
            iVocal_u++;
        break; //fin u

        }//fin switch-case
    }//fin for
    
    //Mostrar los resultados

    cout<<"Mostrar resultados"<<endl;
    cout<<"El total de a es: "<<iVocal_a<<endl;
    cout<<"El total de e es: "<<iVocal_e<<endl;
    cout<<"El total de i es: "<<iVocal_i<<endl;
    cout<<"El total de o es: "<<iVocal_o<<endl;
    cout<<"El total de u es: "<<iVocal_u<<endl;

    getch();

	return 0;
}//fin int main


