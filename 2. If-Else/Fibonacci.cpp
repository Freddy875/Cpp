/*
Realizar la serie de fibonacci
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
    int iNumeroN,iNumeroX = 0,iNumeroY = 1, iNumeroZ = 1;

    cout<<"Ingresa el n\xA3mero de elementos: ";
    cin>>iNumeroN;


    cout<<"1 ";
    if (iNumeroN > 0){
        
        for (int iContador = 1; iContador < iNumeroN; iContador++){
            
            iNumeroZ = iNumeroX + iNumeroY;//1

            cout<<iNumeroZ<<" ";//1

            iNumeroX = iNumeroY;//1

            iNumeroY = iNumeroZ;//1

        }//fin for
        

    }else{

        cout<<"ERROR. No se puede hacer la serie con números negativos o cero";
    
    }//fin if-else
    
    cout<<"\n";

    system("pause");
	
	return 0;
}//fin int main
