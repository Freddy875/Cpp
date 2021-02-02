/*
La sentencia if else

    if(Condicion){

        Instrucciones 1;

    }else{

        Instrucciones 2;

    }//fin if-else
*/
#include <iostream>

using namespace std;

int main(){
	
    int iNumero1, iDato1 = 5;

    cout<<"Ingresa un n\xA3mero:  ";

    cin>>iNumero1;

    //Validar que ambos numeros sean iguales

    if(iNumero1 == 5){

        cout<<"Tu n\xA3mero "<<iNumero1<<" es igual al dato "<<iDato1<<endl;

    }else{

        cout<<"Tu n\xA3mero "<<iNumero1<<" es diferente al dato "<<iDato1<<endl;

    }//fin if-else

    int iNumero2, iDato2 = 9;

    cout<<"\nIngresa otro n\xA3mero:  ";

    cin>>iNumero2;

    //Validar si ambos numeros son diferentes

    if(iNumero2 != iDato2){

        cout<<"Tu n\xA3mero "<<iNumero2<<" es diferente al dato "<<iDato2<<endl;

    }else{

        cout<<"Tu n\xA3mero "<<iNumero2<<" es igual al dato "<<iDato2<<endl;

    }//fin if-else

    int iNumero3, iDato3 = 7;

    cout<<"\nIngresa otro n\xA3mero:  ";

    cin>>iNumero3;

    if(iNumero3 >= iDato3){

        cout<<"Tu n\xA3mero "<<iNumero3<<" es mayor o igual al dato "<<iDato3<<endl;

    }else{

        cout<<"Tu n\xA3mero "<<iNumero3<<" es menor al dato "<<iDato3<<endl;

    }//fin if-else

	int iNumero4, iDato4 = 10;

    cout<<"\nIngresa otro n\xA3mero:  ";

    cin>>iNumero4;

    if(iNumero4 <= iDato4){

        cout<<"Tu n\xA3mero "<<iNumero4<<" es menor o igual al dato "<<iDato4<<endl;

    }else{

        cout<<"Tu n\xA3mero "<<iNumero4<<" es mayor al dato "<<iDato4<<endl;

    }//fin if-else

	
	return 0;
}//fin int main
