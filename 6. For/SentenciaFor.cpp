/*
La sentencia For

    for(epresion1; expresión logica; expresion2){

        conjunto de instrucciones;

    }
*/


#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
    int iNumero1;
    
    for (iNumero1 = 0; iNumero1 <= 10; iNumero1++){
        cout<<iNumero1<<endl;
    }//fin del for
    

	getch();
	
	return 0;
}//fin int main
