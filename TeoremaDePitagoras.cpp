 /*
Leer en entrada estandar los dos catetos 
de un triangulo rectangulo 
Y escribir en salida estandar 
Su hipotenusa 
*/

#include <iostream>
#incluce <math.h>

using namespace std;

int main(){
	
	float fHipotenusaCuadrado = 0, 
	fHipotenusa = 0, 
	fCatetoOpuesto = 0,
	fCatetoAdyacente = 0, 
	fCatetoCuadrado1 = 0,
	fCatetoCuadrado2 = 0;
	
	cout<<"Ingresa el primer cateto: ";
	
	cin>>fCatetoOpuesto;
	
	cout<<"Ingresa el segundo cateto: ";
	
	cin>>fCatetoAdyacente;
	
	fCatetoCuadrado1 = pow(fCatetoOpuesto,2);
	
	fCatetoCuadrado2 = pow(fCatetoAdyacente,2);
	
	fHipotenusaCuadrado = fCatetoCuadrado1 + fCatetoCuadrado2;
	
	fHipotenusa = sqrt(fHipotenusaCuadrado);
	
	cout<<"El resultado de elevar "<<fCatetoOpuesto<<"  al cuadrado es: "<<fCatetoCuadrado1<<endl;
	
	cout<<"El resultado de elevar"<<fCatetoAdyacente<<"  al cuadrado es: "<<fCatetoCuadrado2<<endl;
	
	cout<<"El resultado de la suma de los catetos es: "<<fHipotenusaCuadrado<<endl;
		
	cout<<"Y el resultado de la ra\xA1z cuadrada de la hipotenusa es: "<<fHipotenusa<<endl;
		
	return 0;
}//fin int main


