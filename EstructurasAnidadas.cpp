/*
Estructuras anidadas
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct info_direccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){
	
    //Pedir los datos

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);//Vacia rl buffer y permitir ingresar los valores  
        cout<<"Ingrese su nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Ingrese su direcci\xA2n: ";
        cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Ingresa la Ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Ingresa la Proviencia: ";
        cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
        cout<<"Ingresa el Salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
    }//fin for
    
    //Imprimir los datos
    for (int i = 0; i < 2; i++)
    {
        cout<<"Empleado # "<<i+1<<endl;
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direcci\xA3n: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Proviencia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
    }//fin for
    

	getch();
	
	return 0;
}//fin int main


