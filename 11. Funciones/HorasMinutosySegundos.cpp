/*
Escribir una funcion llamada tiempo() que tenga un parametro en numero 
entero llamado totalSeg y tres parametros de referencia enteros llamados
horas, min y seg. La fucnion es convertir el numero de segundos trasmitido
en un numero equivalente de horas, minutos y segundos. 
*/
#include <iostream>
#include <conio.h>
using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
	
    int iTotalSeg, 
        iHoras,
        iMin, //iMin es para minutos
        iSeg; //iSeg es para segundos

    cout<<"Ingresa el total de segundos: ";
    cin>>iTotalSeg;
	
    tiempo(iTotalSeg, iHoras, iMin, iSeg);

    cout<<"\nTiempo equivalente en la cantidad de segundos digitados: "<<endl;
    cout<<"Horas: "<<iHoras<<endl;
    cout<<"Minutos: "<<iMin<<endl;
    cout<<"Segundos: "<<iSeg<<endl;


	return 0;
    getch();
}//fin int main

void tiempo(int iTotalSeg, int& iHoras, int& iMin, int& iSeg){

    iHoras = iTotalSeg/3600;
    iTotalSeg %= 3600;
    iMin = iTotalSeg/60;
    iSeg = iTotalSeg%60;

}//fin void tiempo 
