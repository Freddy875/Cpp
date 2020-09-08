/*
La sentencia switch 

    switch (expresion){
        case literal1:

            Instrucciones;

        break;

        case literal2:

            Instrucciones;

        break;

    ...

        case literalN:

            Instrucciones;

        break;
    
        default:

            Instrucciones por defecto

            break;
    }//fin switch-case
	
    
*/


#include <iostream>

using namespace std;

int main(){

    int iNumero1;

    cout<<"Ingresa un n\xA3mero entre 1-5: ";
    cin>>iNumero1;

    switch (iNumero1){
        case 1:

            cout<<"Este es el n\xA3mero "<<iNumero1<<endl;

        break;

        case 2:

            cout<<"Este es el n\xA3mero "<<iNumero1<<endl;

        break;

        case 3:

            cout<<"Este es el n\xA3mero "<<iNumero1<<endl;

        break;

        case 4:

            cout<<"Este es el n\xA3mero "<<iNumero1<<endl;

        break;

        case 5:

            cout<<"Este es el n\xA3mero "<<iNumero1<<endl;

        break;

        default:
        
            cout<<"Opci\xA2n NO Valida"<<endl;
            cout<<"Tu n\xA3mero "<<iNumero1<<" no esta dentro del rango (1-5)"<<endl;

        break;
    }//fin switch-case
	
	
	return 0;
}//fin int main

