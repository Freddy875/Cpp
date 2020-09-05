//Intercambiar los valores de dos variables 

#include <iostream>

using namespace std;

int main(){
	
	int iNumeroX,
		iNumeroY,
		iAux; 
		/*
		Esta variable servira como auxiliar para guardar 
		uno de los valores 
		*/
		
		cout<<"Ingresa el valor de x: ";
		
		cin>>iNumeroX;
		
		cout<<"Ingresa el valor de y: ";
		
		cin>>iNumeroY;
		
		iAux = iNumeroX;
		
		iNumeroX = iNumeroY;
		
		iNumeroY = iAux;
		
		cout<<"Ahora x vale: "<<iNumeroX<<endl;
		
		cout<<"Y el valor de y es: "<<iNumeroY<<endl;
		
		
	return 0;
}//fin int main


