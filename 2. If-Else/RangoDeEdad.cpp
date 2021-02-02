/*
Solicitar la edad e indicar en salida estandar 
si la edad esta dentro del rango [18-25]
*/

#include <iostream>

using namespace std;

int main(){
	
    int iEdad;

    cout<<"Ingresa la edad: ";

    cin>>iEdad;

	if ((iEdad>=18)&&(iEdad<=25)){

        cout<<"Su edad "<<iEdad<<" esta dentro del rango [18-25]";

    }else{
        
        cout<<"Su edad "<<iEdad<<" NO esta dentro del rango [18-25]";

    }//fin if-else
    
	
	return 0;
}//fin int main
