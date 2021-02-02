/*
Leer un arreglo de escruturas los datos de N empleados 
de la empresa yq e implima los datos del empleado con
mayor y menor salario
*/
//Machote

#include <iostream>
#include <conio.h>

using namespace std;

struct Empleado
{
    char nombre[20];
    float salario;
}emp[100];


int main(){
	
    int iNumEmpleados,
        iPosicionMayor = 0, //Para guardar la posicion del empleado con mayor salario
        iPosicionMenor = 0; //Para guardar la posicion del empleado con menor salario
    float fMayor = 0, fMenor = 99999;

    cout<<"Ingresa el numero de empleados: ";
    cin>>iNumEmpleados;

    //Para agregar todos los trabajadores de la empresa


    for (int i = 0; i < iNumEmpleados; i++)
    {
        fflush(stdin);
        cout<<"Ingresa el nombre del empleado No. "<<i+1<<": ";
        cin.getline(emp[i].nombre,20,'\n');
        cout<<"Ingresa el salraio del empleado: ";
        cin>>emp[i].salario;

        //Para encontrar el emeplado con mayor salario y su posición 

        if (emp[i].salario > fMayor)
        {
            fMayor = emp[i].salario;
            iPosicionMayor = i;
        }//fin if

        //Para encontrar el empleado con menor salario y su posición

        if (emp[i].salario < fMenor)
        {
            fMenor = emp[i].salario;
            iPosicionMenor = i;
        }//fin if
        
        cout<<"\n";
    }//fin for

    //Mostramos los datos del empleado con mayor salario

    cout<<"\n Datos del emeplado con mayor salario: \n";
    cout<<"\nNombre: "<<emp[iPosicionMayor].nombre<<endl;
    cout<<"\nSalario: "<<emp[iPosicionMayor].salario<<endl;

    //Ahora mostramos los datos del emepleado con menor salario

    cout<<"\n Datos del emeplado con menor salario: \n";
    cout<<"\nNombre: "<<emp[iPosicionMenor].nombre<<endl;
    cout<<"\nSalario: "<<emp[iPosicionMenor].salario<<endl;
	
	getch();
	return 0;
}//fin int main
