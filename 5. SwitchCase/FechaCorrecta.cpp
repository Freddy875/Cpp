/*
Programa que indica si la fecha es correcta
o incorrecta, ingresando desde el teclado
el dia, mes y anio
*/


#include <iostream>

using namespace std;

int main(){
	
    int iDia,iMes,iAnio;

    cout<<"\nEste programa te indica si una fecha es correcta o incorrecta"<<endl;

    system("pause");
	
	system("cls");

    cout<<"\nIngresa el d\241a: ";

    cin>>iDia;

    cout<<"\nIngresa el mes: ";

    cin>>iMes;

    cout<<"\nIngresa el a\xA4o: ";

    cin>>iAnio;

    if(iAnio > 0){
		
		switch(iMes){
		
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			
				if((iDia>=1) && (iDia<=31)){
				
                    cout<<"\nFecha correcta"<<endl;
                    
                    cout<<"\nLa fecha es: "<<iDia<<"/"<<iMes<<"/"<<iAnio;
                    
					
				}else{

                    cout<<"\nFecha Incorrecta"<<endl;

                    cout<<"\n\nPara estos meses los d\241as debe estar entre 1 a 31";
				
					
				}//fin if-else
			
			break;
			/*
			Este caso es para los meses de
			Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre
			Que tiene 31 dias 
			*/
		
			case 2:
			
				if(iAnio%4 == 0){
				
                    cout<<"\nEs a\xA4o bisiesto"<<endl;

						if((iDia>=1) && (iDia<=29)){
					
							cout<<"\nFecha correcta"<<endl;
                            
                            cout<<"\nLa fecha es: "<<iDia<<"/"<<iMes<<"/"<<iAnio;
							
						}else{
					
							cout<<"\nFecha Incorrecta"<<endl;

                            cout<<"\nComo es a\xA4o bisiesto los d\241as debe estar entre 1 a 29";
					
						}//fin if-else
			
				}else{

                    cout<<"\nNO es a\xA4o bisiesto"<<endl;
				
						if((iDia>=1) && (iDia<=28)){

                            cout<<"\nFecha correcta"<<endl;
												
                            cout<<"\nLa fecha es: "<<iDia<<"/"<<iMes<<"/"<<iAnio;

						}else{
					
							cout<<"\nFecha Incorrecta"<<endl;
							
                            cout<<"\nComo NO es a\xA4o bisieste los d\241as deben estar entre 1 a 28";
					
						}//fin if-else
				
				}//fin if else
			
			break;
			/*
			Este caso es para el mes de Febrero 
			que dependiendo del anio puede tener
			entre 28 o 29 dias si es anio bisiesto
			*/
		
			case 4:
			case 6:
			case 9:
			case 11:
			
				if((iDia>=1) && (iDia<=30)){
				
					cout<<"\nFecha correcta"<<endl;
												
                    cout<<"\nLa fecha es: "<<iDia<<"/"<<iMes<<"/"<<iAnio;
				
				}else{
				
					cout<<"\nFecha incorrecta"<<endl;
					
					cout<<"\nPara estos meses los d\241as debe estar entre 1 a 30";
						
				}//fin if-else
		
			break;
			/*
			Este caso es para los meses de 
			Abril, Junio, Septiembre, Noviembre
			Que tiene 30 dias 
			*/
		
			default:
			
				cout<<"\nFecha incorrecta"<<endl;
				
				cout<<"\nEl mes debe estar entre 1 a 12";
	
		}//fin switch case
		
	}else{
		
		printf("\nERROR. \nLa fecha debe ser mayor que cero");
		
	}//fin if-else    
	
	
	return 0;
}//fin int main
