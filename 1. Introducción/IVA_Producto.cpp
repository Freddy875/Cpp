/*
Leer en estrada estandar el precio 
de un producto y mostrar en salida 
estandar el predcio del producto 
al aplicarle el IVA
El IVA es del 16%

*/

#include <iostream>

using namespace std;

int main(){

	float fPrecioProducto,fIVA = 0;
	
	cout<<"Este programa te dice el IVA de tu producto"<<endl;
	
	cout<<"El IVA es del 16%"<<endl;
	
	cout<<"Ingresa el precio de tu producto: ";
	
	cin>>fPrecioProducto;
	
	fIVA = (fPrecioProducto * 0.16) + fPrecioProducto;
	
	cout<<"El precio del producto antes del IVA es:"
	<<fPrecioProducto<<endl;
	
	cout<<"\nEl precio del producto desp\xA3s del IVA es:"
	<<fIVA<<endl;
	
	
	return 0;

}//fin int main


