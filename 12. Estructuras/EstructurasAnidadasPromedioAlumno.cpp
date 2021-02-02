/*
Hacer 2 estructuras 
La primera llamada Promedio que tendra los siguiente campos 
nota1,nota2,nota3
El otro se llamara alumno con los siguientes campos
nombre, edad,sexo
La estructura promedio estara anidada en la estructura alumno 
luego pedir todos los datos de alumno,
calcular su promedio y por ultimo 
imprimir todos los datos
*/
#include <iostream>
#include <conio.h>
using namespace std;

struct Promedio
{
    float fNota1;
    float fNota2;
    float fNota3;
};

struct Alumno
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;
}alumno1;



int main(){

    float fPromedioAlumno;

    //Pedimos los datos del alumno
	
    cout<<"Datos del alumno"<<endl;
    cout<<"Ingrese su nombre: ";
    cin.getline(alumno1.nombre,20,'\n');
    cout<<"Ingres su sexo: ";
    cin.getline(alumno1.sexo,10,'\n');
    cout<<"Ingrese su edad: ";
    cin>>alumno1.edad;

    //Pedimos las notas del alumno

    cout<<"\nNotas del alumno: "<<endl;
    cout<<"Nota 1: ";
    cin>>alumno1.prom.fNota1;
    cout<<"Nota 2: ";
    cin>>alumno1.prom.fNota2;
    cout<<"Nota 3: ";
    cin>>alumno1.prom.fNota3;

    fPromedioAlumno = (alumno1.prom.fNota1 + alumno1.prom.fNota2 + alumno1.prom.fNota3)/3;

    //Mostramos los datos del alumno

    cout<<"\nDatos del alumno"<<endl;
    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Promedio: "<<fPromedioAlumno<<endl;

	getch();
	return 0;
}//fin int main