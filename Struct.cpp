/*
Una estructura es una colección de uno 
o mas tipos de elementos denominados 
campos, cada uno de los cuales puede
ser un tipo de dato diferente

struct <nombreDeLaEstructura>{
    <tipoDeDatos> <nombreDeCampo>
    <tipoDeDatos> <nombreDeCampo>
    <tipoDeDatos> <nombreDeCampo>
    ...
    <tipoDeDatos> <nombreDeCampo>
};

struct Colecciones_CD{
    char titulo[30],
    char artista[25],
    int numCanciones;
    float precio;
    char fecha_compra[20];
};

Otra forma de declarar struct
struct Colecciones_CD{
    char titulo[30],
    char artista[25],
    int numCanciones;
    float precio;
    char fecha_compra[20];
}CD1,CD2,CD3;

Y una forma de declarar struct
int main(){
    struct coleccion_CD CD1,CD2,CD3;
}

*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Persona{
    char sNombre[20];
    int edad;

}
persona1 = {"Freddy",24},
persona2 = {"Joshua",25};


int main(){
	
    cout<<"Nombre 1:"<<persona1.sNombre<<endl;
    cout<<"Edad 1: "<<persona1.edad<<endl;
    //printf("Nombre 1: %s\n",persona1.sNombre );
    //printf("Edad 1: %d\n",persona1.edad);

    cout<<"Nombre 2:"<<persona2.sNombre<<endl;
    cout<<"Edad 2: "<<persona2.edad<<endl;
    //printf("Nombre 2: %s\n",persona2.sNombre );
    //printf("Edad 2: %d\n",persona2.edad);
    
	getch();
	return 0;
}//fin int main


