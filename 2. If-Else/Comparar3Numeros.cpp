/*
Ingresar desde entrada estandar 3 numeros
Luego ingresar un cuerto numero 
e indicar si ese numero concide 
con alguno de los 3 anteriores
*/

#include <iostream>

using namespace std;

int main(){
	
    int iNum1,
        iNum2,
        iNum3,
        iNum4;
	
    cout<<"Ingresa el primer n\xA3mero: ";

    cin>>iNum1;

    
    cout<<"Ingresa el segundo n\xA3mero: ";

    cin>>iNum2;

    
    cout<<"Ingresa el tercer n\xA3mero: ";

    cin>>iNum3;

    
    cout<<"Ingresa el cuarto n\xA3mero: ";

    cin>>iNum4;

    if(iNum1 == iNum2 && iNum1 == iNum3 && iNum1 == iNum4) {
		
		//En este caso validamos que los cuatro números sean iguales
		
        cout<<iNum1<<","<<iNum2<<","<<iNum3<<","<<iNum4<<" Los 4 n\xA3meros son iguales"<<endl;

        //printf("\n%d, %d y %d. Los tres valores son iguales",iNum1,iNum2,iNum3);
		
	}else if (iNum1 == iNum4){

        //En este caso validamos que el primero y el cuarto sean iguales

        cout<<iNum1<<","<<iNum4<<" El primer y el cuarto n\xA3mero son iguales"<<endl;

    }else if (iNum2 == iNum4){
        
        //En este caso validamos que el segundo y el cuarto sean iguales

        cout<<iNum2<<","<<iNum4<<" El segundo y el cuarto n\xA3mero son iguales"<<endl;

    }else if (iNum3 == iNum4){

        //en este caso validamos que el tercero y el cuarto sean iguales

        cout<<iNum3<<","<<iNum4<<" El tercer y el cuarto n\xA3mero son iguales"<<endl;

    }else {

        cout<<iNum1<<","<<iNum2<<","<<iNum3<<","<<iNum4<<" Ninguno de los cuatro n\xA3meros son iguales"<<endl;

    }//fin if-else

	return 0;
}//fin int main
