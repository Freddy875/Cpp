/*
Solicitiarle al usuario un numero entero entre el 1 al 100
Generar un numero aleatorio tambeine entre el  1 al 100
Indicarle al usuario si el numero que ingreso es mayor 
o menor al numero aleatorio, hasta que adivine 
Por ultimo mostrarle el numero de intentos
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	
    int iNumero, iDato, iContador = 0;
	
    srand(time(NULL));//Genera un numero aleatorio
    iDato = 1 + rand()%(100);

    do{
        cout<<"Ingresa un n\xA3mero: ";
        cin>>iNumero;

        if (iNumero > iDato){
            
            cout<<"\nIngresa un n\xA3mero menor\n";

        }else{
            cout<<"\nIngresa un n\xa3mero mayor\n";
        }//fin if-else
        
        iContador++;

    } while (iNumero != iDato);
    
    cout<<"\n!FELICIDADES¡ Adivinaste el n\xA3menro\n";

    cout<<"N\xA3mero de intentos: "<<iContador<<endl;

    system("pause");
	
	return 0;
}//fin int main
