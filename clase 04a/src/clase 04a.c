/*
 ============================================================================
 Name        : clase.c
 Author      : Daniel
 Version     :
 Copyright   : clase 4
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getN 0umero(int *numAux,int max, int min, int intentos);

int main(void)
{
	int numero;
	int aux_getNumero;

	aux_getNumero = getNumero(&numero,10,1,3);
	return 0;
}

int getNumero(int *numAux,int max, int min, int intentos)
{
	int numIngresado,i;
	int ret=-1;

	for (i=0;i<intentos;i++)
	{
		printf("ingrese un numero: ");
		scanf("%d",&numIngresado);

		if (numIngresado<=max && numIngresado>=min)
		{
			ret=0;
			i=intentos;
		}
		else
		{
			printf("Error. Numero fuera de rango. (10-1)");
		}
	}
	*numAux = numIngresado;

	return ret;
}

