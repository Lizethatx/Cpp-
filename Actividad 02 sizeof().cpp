#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	int opc;
	char opcion[7];
	char entero[] = "int";
	char caracter[] ="char";
	char corto[] = "short";
	char largo[] = "long";
	char doble[] = "double";
	char flotante[] = "float";
	do{
		cout<<"----------MENU------------"<<endl;
		cout<<"[1] Ingresar un tipo de dato"<<endl<<"[0] Salir"<<endl;
		cin>>opc;
		switch (opc){
			case 1: cout<<"Ingres el tipo de dato [char, int, short, float, double, long]: "<< endl;
					cin>>opcion;
					if (strcmp(opcion,entero)==0){
						cout<<"bytes: "<<sizeof(int)<<endl;
					}
					else if (strcmp(opcion,caracter)==0){
						cout<<"bytes: "<<sizeof(char)<<endl;
					}
					else if (strcmp(opcion,corto)==0){
						cout<<"bytes: "<<sizeof(short)<<endl;
					}
					else if (strcmp(opcion,largo)==0){
						cout<<"bytes: "<<sizeof(long)<<endl;
					}
					else if (strcmp(opcion,doble)==0){
						cout<<"bytes: "<<sizeof(double)<<endl;
					}
					else if (strcmp(opcion,flotante)==0){
						cout<<"bytes: "<<sizeof(float)<<endl;
					}
					else {
						cout<<"No coincide"<<endl;
					}	
					break;
			case 0: system("pause");
					break;
					
			default:cout<<("ERROR, ingresa una opcion valida.\n");
					break;
		}
	} while (opc != 0);
	getch();
	return 0;
}
