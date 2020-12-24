/*
Definir una estructura que indique el tiempo empleado por un ciclista
en una etapa. La estructura debe de tener 3 campos: horas, minutos y segundos
Dado que hay n etapas calcule el tiempo total empleado 
en correr todas las etapas
*/
#include <iostream>
#include <conio.h>
using namespace std;

struct Tiempo
{
    int horas;
    int minutos;
    int segundos;
}etapas[100];


int main(){
	
    int numeroEtapas,
        horasT=0,
        minutosT=0,
        segundosT=0;

    cout<<"Ingresa el n\xA3mero de etapas: ";
    cin>>numeroEtapas;

    for (int i = 0; i < numeroEtapas; i++)
    {
        //Pidiendo los datos al usuario
        cout<<"Etapa #"<<i+1<<endl;

        cout<<"Ingresa el n\xA3mero de horas: ";
        cin>>etapas[i].horas;
        cout<<"Ingresa el n\xA3mero de minutos: ";
        cin>>etapas[i].minutos;
        cout<<"Ingresa el n\xA3mero de segundo: ";
        cin>>etapas[i].segundos;

        horasT = horasT + etapas[i].horas;
        minutosT = minutosT + etapas[i].minutos;
        if (minutosT >= 60)
        {
            minutosT -= 60;
            horasT++;
        }//fin if
        segundosT = segundosT + etapas[i].segundos;
        if (segundosT >= 60)
        {
            segundosT -= 60;
            minutosT++;
        }//fin if

        cout<<"\n";

    }//fin for

        cout<<"\nTiempo total empleado\n";
        cout<<"Horas: "<<horasT<<endl;
        cout<<"Minutos: "<<minutosT<<endl;
        cout<<"Segundo: "<<segundosT<<endl;    
	
	
	return 0;
}//fin int main