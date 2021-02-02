/*
Definir dos vectores de caracteres 
y despues almacenar el valor de ambos vectores
en un nuevo vector, situando el en primer lugar
los elementos del primer vector seguido por los
elementos del segundo vector. Mostrar el contenido  
del nuevo vector en la salida estandar
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    char cLetras1[] = {'a','b','c','d','e'};
    char cLetras2[] = {'f','g','h','i','j'};
    char cLetras3[10];

    //Copiando los elemeentos de cLetras1 hacia cLetras3
    for (int i = 0; i < 5; i++)
    {
        cLetras3[i] = cLetras1[i];
        
    }//fin for
    
    //Copiando los elementos de cLetras2 hacia cLetras3
	
    for (int j = 5; j < 10; j++)
    {
        cLetras3[j] = cLetras2[j-5];
    }//fin for

    //Mostrar el nuevo vector
    for (int k = 0; k < 10; k++)
    {
        cout<<cLetras3[k]<<endl;
    }//fin for
    
    getch();
	
	return 0;
}//fin int main
