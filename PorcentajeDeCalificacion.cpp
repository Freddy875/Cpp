/*
Las calificaciones final de un estudiante es la media 
ponderada de tres notas: La nota de las practicas que 
cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participación que cuenta el 10% restante
*/

#include <iostream>

using namespace std;

int main(){
	
	float fNotaPractica,
		  fNotaTeorica,
		  fNotaParticipacion,
		  fNotaFinal;
	
	cout<<"Ingresa la nota practica: ";
	
	cin>>fNotaPractica;
		
	cout<<"Ingrese la nota t\x82orica: ";
	
	cin>>fNotaTeorica;
	
	cout<<"Ingresa la nota de participa\xA2n: ";
	
	cin>>fNotaParticipacion; 
	
	fNotaPractica *= 0.3;
	
	fNotaTeorica *= 0.6;
	
	fNotaParticipacion *= 0.10; 	  

	fNotaFinal = fNotaPractica + fNotaTeorica + fNotaParticipacion;
	
	cout<<"El porcentaje de practica es de: "<<fNotaPractica<<endl;
	
	cout<<"El porcentaje de t\x82oria es de: "<<fNotaTeorica<<endl;
	
	cout<<"El procentaje de participa\xA2n es de: "<<fNotaParticipacion<<endl;
	
	cout<<"Y la califica\xA2n final es de: "<<fNotaFinal<<endl;
	
	
	return 0;
}//fin int main

