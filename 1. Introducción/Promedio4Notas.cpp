//Promedio de 4 alumnos

#include <iostream>

using namespace std;

int main(){

	float fNota1,
		  fNota2,
		  fNota3,
		  fNota4,
		  fPromedio;

	cout<<"Este porgrama calcula el promedio de 4 alumnos"<<endl;
	
	cout<<"Ingresa la primera nota: ";
	cin >>fNota1;
	cout<<"\nIngresa la segunda nota: ";
	cin >>fNota2;
	cout<<"\nIngresa la tercera nota: ";
	cin >>fNota3;
	cout<<"\nIngresa la cuarta nota: ";
	cin >>fNota4;
	
	fPromedio = (fNota1 + fNota2 + fNota3 + fNota4)/4;
	
	cout<<"\nEl promedio de los 4 alumnos es: "<<fPromedio;
		
	return 0;
}//fin int main


