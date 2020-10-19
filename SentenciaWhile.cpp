/*
La sentencia while:

	while(expresion logica){
	
		conjunto de instrucciones;
	
	}

*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int iNumero1;

	iNumero1 = 0;

	cout<<"Incremento"<<endl; 

	while (iNumero1 <= 10){
	
		cout<<iNumero1<<endl;

		//iNumero1 = iNumero1 + 1;

		//iNumero1 += 1;

		iNumero1++;

	}//fin while
	
	cout<<"Decremento"<<endl;



	int iNumero2 = 10;
	
	while (iNumero2 >= 0){
	
		cout<<iNumero2<<endl;

		//iNumero2 = iNumero2 - 1;

		//iNumero2 -= 1;

		iNumero2--;

	}//fin while

	getch();
	
	
	return 0;
}//fin int main



