/*
Paso de parametros de tipo vector 

Parametro de la funcion 
    void nombreDeFuncion(tipo nombreArreglo[], int tamanioArreglo)

Llamada a la funcion 
    nombreDeFuncion(nombreArreglo, tamanioArreglo)
*/

//Cuadrados de los elementos del vector 

#include <iostream>
#include <conio.h>
using namespace std;

void muestra1(int vec[],int);
void cuadrado(int vec[],int);
void muestra2(int vec[],int);


int main(){
	
    const int TAM =  5; //TAM es por tamanio 
	int vec[TAM] = {1,2,3,4,5}; //vec es por vector 

    printf("N%cmeros originales: \n",163);

    muestra1(vec,TAM);
    //Esta funcion es para mostrar los numeros antes de ser elevados al cuadrado 

    printf("\n");

    cuadrado(vec,TAM); 
    //Esta funcion es para calcula el cuadrado de los numeros 

    printf("N%cmeros desp%ces de elevarse al cuadrado: \n",163,163);

    muestra2(vec,TAM);
    //Esta funcion es para mosntrar el resultado de elevar los numeros al cuadrado 


	getch();
	return 0;

}//fin int main

void muestra1(int vec[], int tam){
    for (int i = 0; i < tam; i++)
    {
        cout<<vec[i]<<" ";
    }//fin for
    
}//fin void muestra 

void cuadrado(int vec[], int tam){
    for (int i = 0; i < tam; i++)
    {
        vec[i] = vec[i] * vec[i];
    }//fin for
    
}//fin void cuadrado

void muestra2(int vec[], int tam){
    for (int i = 0; i < tam; i++)
    {
        cout<<vec[i]<<" ";
    }//fin for
    
}//fin void muestra 
