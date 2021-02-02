//Cadenas de caracteres

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
    char cPalabra1[] = "Freddy",
        cPalabra2[] = {'F','r','e','d','d','y'},
        cNombre[30];

        //cout<<cPalabra1<<endl;
        //cout<<cPalabra2<<endl;
	
        cout<<"Ingrese su nombre: ";
        //cin>>cNombre;
        //gets(cNombre);
        cin.getline(cNombre,30,'\n');

        cout<<cNombre;
	
    getch();

	return 0;
}//fin int main

