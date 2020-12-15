/*
Hacer una estructura llamada corredor, la cual tendra los siguientes
campos: Nombre, edad, sexo, club, se piden los datos al usuario 
para el corredor y asi una categoria de competencia
- Juvenil <= 18 anios
- Senior <= 40 anios
- Veterano  > 40 anios
Posteriormente imprimir todos los datos del corredor,
incluso su categoria de competician 
*/

#include <iostream>
#include <conio.h>
#include <string.h>

struct corredor
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}c1;


using namespace std;

int main(){

    char sCategoria[20];

    //int iNumeroDatos;

    //struct corredores;

    //Preguntar cuantos corredores se desea ingresar

    //printf("%cCuantos corredores quieres ingresar %c\n",168,63);
	//scanf("%d",iNumeroDatos);


    //Solicitar los datos de los correodres uno por uno  

    //for (int iContador = 0; iContador < iNumeroDatos; iContador++)
    //{
       // cout<<"Corredor No. "<<iContador<<endl;
        cout<<"Nombre: ";
        cin.getline(c1.nombre,20,'\n');
	    cout<<"Edad: ";
        cin>>c1.edad;
        fflush(stdin);
        cout<<"Sexo: ";
        cin.getline(c1.sexo,10,'\n');
        cout<<"Club: ";
        cin.getline(c1.club,20,'\n');

        //Validar la edad de los corredores para asignarles una categoria

        if (c1.edad <= 18)
        {
            strcpy(sCategoria,"Juvenil");
        }else if (c1.edad <= 40)
        {
            strcpy(sCategoria,"Senior");
        }else
        {
            strcpy(sCategoria,"Veterano");
        }//fin if-else

    //}//fin for 
    
    //Imprimir los datos de los corredores
    
    //for (int jContador = 0; jContador < iNumeroDatos; jContador++)
    //{
        //cout<<"\nDatos del corredor No.: "<<jContador<<endl;
        cout<<"Nombre: "<<c1.nombre<<endl;
        cout<<"Edad: "<<c1.edad<<endl;
        cout<<"Sexo: "<<c1.sexo<<endl;
        cout<<"Club: "<<c1.club<<endl;
        cout<<"Categoria: "<<sCategoria<<endl;
    //}
    
	getch();
	return 0;
}//fin int main
