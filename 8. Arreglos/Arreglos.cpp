/*
Definir un vector de numeros y
calcular la suma de sus elementos 
*/

#include <iostream>
#include <conio.h>


using namespace std;

int main(){
	
    int iVectorNumeros[5] = {1,2,3,4,5};
    int iSuma = 0;

    for (int i = 0; i < 5; i++)
    {

        cout<<iVectorNumeros[i]<<endl;

        iSuma += iVectorNumeros[i];
    }//fin for
    

    cout<<"La suma de los elementos del vector es: "<<iSuma<<endl;

	getch();
	
	return 0;
}//fin int main
