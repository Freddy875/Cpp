/*
Leer de entrada estandar un caracter
e indicar en salida estandar 
si el caracter es una vocal 
Mayuscula, Minuscula 
o si no es una vocal
*/

#include <iostream>

using namespace std;

int main(){
	
    char cLetra; 

    cout<<"Ingresa un caracter: ";

    cin>>cLetra; 

    switch (cLetra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        
            cout<<"Tu caracter: "<<cLetra<<" es una vocal y es minuscula";

        break;
        //Para las vocales minusculas

        case 'A':
        case 'E':
        case 'O':
        case 'I':
        case 'U':

            cout<<"Tu caracter: "<<cLetra<<" es una vocal y es Mayuscula";

        break;
        
    
        default:

            cout<<"Tu caracter :"<<cLetra<<" NO es una vocal ";
        
        break;
    }//fin switch-case
	
	
	return 0;
}//fin int main


