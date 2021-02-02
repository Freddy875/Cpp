/*
La setencia do-while

    do{

        conjunto de instrucciones 

    }while(expresión logica);

*/


#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
    int iNumero1;
    
    iNumero1 = 0;

    do{
        cout<<iNumero1<<endl;
        iNumero1++;
    } while (iNumero1<=10); //fin do-while
    
	system("pause");
	
	return 0;
}//fin int main
