/*
Realizar una funcion que tome como parametros un vector de numeros enteros 
y devuelva la suma de sus elementos 
*/
#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
int calcularSuma(int vector[],int);

int vector[100],tam;

int main(){
	
    pedirDatos();

    cout<<"\nLa suma de los elementos del vector es: "<<calcularSuma(vector,tam);
	
	getch();
	return 0;
}//fin int main


void pedirDatos(){
    cout<<"Ingrese el n\xA3menro de elementos del vector: ";
    cin>>tam;

    for (int i = 0; i < tam; i++)
    {
        cout<<i+1<<". Ingresa un n\xA3mero: ";
        cin>>vector[i];
    }//fin for 
}//fin void pedirDatos 

int calcularSuma(int vector[],int tam){
    int iSuma = 0;
    
    for (int i = 0; i < tam; i++)
    {
        iSuma += vector[i];
    }//fin suma 
    
    return iSuma;

}//fin void calcularSuma 
