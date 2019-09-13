/*
 * declarar una lista de personas: 100
 * menu cargar persona: nombre, edad, dni
 * imprimir lista
 ============================================================================
 Name        : estructuras.c
 Author      : dv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu();
struct s_persona
{
	int edad;
	int dni;
	char nombre [50];
};

typedef struct s_persona Persona ;


int main(void)
{
	menu();
	return EXIT_SUCCESS;
}

int menu()
{
	int option,i,j;
	int edad, dni
	char nombre[50];

	Persona lista[100];

	do
	{
		switch (option)
		{
		case 1:
			for(i=0;i<lista;i++)
			{
				printf("CARGA:");
				printf("ingrese dni");
				scanf("%d",dni);
				lista[0].dni = dni;
			}
			break;
		case 2:
			printf("IMPRIMIR:");
			break;
		case 3:
			printf("SALIR:");
			break;
		}
	} while(option!=3);

		return 0;
}

