/*
 ============================================================================
 Name        : iteracion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirCantidad();
int calcularMaximosYminimos(int cantidad, int min, int max);

int main(void)
{
	int aux_cantidad;
	int iteracion;
	int *minimo;
	int *maximo;

	cantidad = pedirCantidad();
	iteracion = calcularMaximosYminimos(aux_cantidad, *minimo, *maximo);

	printf("el numero maximo es: %d",*maximo);
	printf("el numero minimo es: %d",*minimo);
}

int pedirCantidad()
{
	int numero;
	printf("cantidad de repeticiones?");
	scanf("%d",&numero);
	return numero;
}

int calcularMaximosYminimos(int cantidad, int min, int max)
{
	int numero;

	for(i=0;i<cantidad;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);

		if(i==0||numero>max)
		{
			max=numero;
		}
		if(i==0||numero<min)
		{
			min=numero;
		}
	}
	min=*maximo;
	max=*minimo;
}
