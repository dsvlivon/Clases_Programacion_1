/*
 ============================================================================
 Name        : clase.c
 Author      : daniel vizgarra
 Version     :
 Copyright   : th
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANT_EL 4
#define limite 2

int main(void)
{
	int legajo[CANT_EL];
	char sexo [CANT_EL];
	int edad [CANT_EL];
	int nota1P [CANT_EL];
	int nota2p [CANT_EL];
	float promedio [CANT_EL];

	cargarSetDatos(legajo,sexo, edad, nota1P, nota2P,promedio,limite);
	//mostrarEstudiante(
	//mostrarEstudiantes(
	getFloat()
}

int cargarSetDatos(int* pLegajo, char* pSexo, int* pEdad, int* pNota1P, int* pNota2P, float *pPromedio, int limite)
{
	int i;
	int buffer;

	for(i=0;i<limite,i++)
	{
		if(getInt(&buffer,))
	}
}

mostrarEstudiante(int pLegajo, char pSexo, int pEdad, int pNota1P, int pNota2P, float *pPromedio)
{
	printf ("SDASDA"//un modif d formato y valor xc/u d los datos);
}

mostrarEstudiantes(int* pLegajo, char* pSexo, int* pEdad, int* pNota1P, int* pNota2P, float *pPromedio, int limite)
{
	int i;
	printf ("\nAlimno: Legajo: Sexo: Edad: Nota1: Nota2: Promedio: %d %d %c %d %d %d %f", pLegajo, pSexo, pEdad, pNota1P, pNota2P,pPromedio);

	for(i=0;i<limite;i++)
	{
		(int pLegajo[i], char pSexo[i], int pEdad[i], int pNota1P[i], int pNota2P[i], float *pPromedio[i]);
	}
}
