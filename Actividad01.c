//Actividad 01 - lizeth Avendaño Garcia
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
void capturar_enteros(){
	int i, suma=0, a[5];
	float prom;
	for(i=0;i<5;i++) //capturar 
	{
		printf("%i: ",i+1);
		scanf("%i",&a[i]);
	}
	
	printf("Numeros ingresados:\n");
	for(i=0;i<5;i++) //mostrar
	{
		printf("%i\n", a[i]);
	}	
	for(i=0;i<5;i++) //suma
	{
		suma+=a[i];
	}
	prom=suma/5.0; //promedio
	printf("La suma total es: %i\n", suma);
	printf("El promedio es: %.2f\n",prom);
		
}

void mostrar_arreglo(int n, char arreglo[]){
	int i;
	for (i=0;i<n;i++)
	{
		printf("%s", arreglo);
	}
}

struct PERSONAJE
{
	char nombre[50];
	char tipo[30];
	float fuerza;
	int salud;
}personaje[5];

void capturar_personaje(struct PERSONAJE personaje[],int cont){
	printf("Nombre: ");
	scanf("%s",personaje[cont].nombre);
	printf("Tipo: ");
	scanf("%s",personaje[cont].tipo);
	printf("Fuerza: ");
	scanf("%f",&personaje[cont].fuerza);
	printf("Salud: ");
	scanf("%i",&personaje[cont].salud);	
}

void mostrar(struct PERSONAJE personaje[],int capt){
	int i2;
	for (i2=0;i2<capt;i2++)
	{
		printf("Nombre: %s\n",personaje[i2].nombre);
		printf("Tipo: %s\n",personaje[i2].tipo);
		printf("Fuerza: %.2f\n",personaje[i2].fuerza);
		printf("Salud: %i\n",personaje[i2].salud);
	}
}

int main(int argc, char *argv[]) {
	char opcion, arreglo[50];
	int n,indice=0,captura=0;
	struct PERSONAJE personaje[MAX];
	do
	{
		printf("--ELIJA UNA OPCION DEL MENU--\n");
		printf("1.-Capturar 5 numeros enteros\n");
		printf("2.-Mostrar n veces un arreglo\n");
		printf("3.-Crear hasta 5 personajes\n");
		printf("4.-Mostrar personajes\n");
		printf("5.-Salir\n");
		scanf("%c",&opcion);
		
		switch(opcion){
			case '1':printf("Ingrese 5 numeros enteros\n");
					capturar_enteros();
					break;
			case '2':printf("Ingrese una frase (max 50 caracteres): ");
					fflush(stdin);
					fgets(arreglo,50,stdin);
					printf("Numero de veces que quiere imprimir: ");
					scanf("%i",&n);
					mostrar_arreglo(n,arreglo);
					break;
			case '3':if (captura==MAX)
						{
							printf("No se permite mas registros de personajes!\n");
						}
					else
						{
							capturar_personaje(personaje,indice);
							indice++;
							captura++;	
						}
					break;
			case '4':if (captura==0)
						{
							printf("No hay registros capturados \n");
						}
					mostrar(personaje,captura);
					break;
		}
		fflush(stdin);
	}while (opcion != '5');
	return 0;
}
