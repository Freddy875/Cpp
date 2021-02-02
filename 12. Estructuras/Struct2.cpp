/*
Ahora vamos a relelnar la estructura
con datos que ingresa el usuario
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Persona{
    char sNombre[20];
    int edad;

}persona1,persona2;


int main(){

    //Primero solicitamos los datos al usuario
    cout<<"Ingresa el nombre de la persona 1: ";
    cin.getline(persona1.sNombre,20,'\n');
    cout<<"\nIngresa la edad de la persona 1: ";
    cin>>persona1.edad;

    //Ahora imprimimos los datos 
    cout<<"\nImpriendo datos\n";
    cout<<"Nombre 1:"<<persona1.sNombre<<endl;
    cout<<"Edad 1: "<<persona1.edad<<endl;
    
	getch();
	return 0;
}//fin int main
