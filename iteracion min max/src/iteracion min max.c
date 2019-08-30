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
#include "th.h"


int CalculateMaxAndMin(int *auxMin, int *auxMax);

#define MSG_ERR "Error"

int main(void)
{
	int iteration;
	int minus;
	int maximus;

	iteration = CalculateMaxAndMin(&minus, &maximus);

	if (iteration == 0)
	{
		printf("El número máximo es: %d\n: ", maximus);
		printf("El número mínimo es: %d\n: ", minus);
	}
	else
	{
		printf(MSG_ERR);
	}
}

int CalculateMaxAndMin(int *auxMin, int *auxMax)
{
	int number;
	int i=0;
	int max=*auxMax;
	int min=*auxMin;
	int rta;
	int auxFail=-1;

do
	{
		th_getNumber(int &number,99,1, 3);

		if(i==0 || number<min)
		{
			min=number;
		}
		*auxMin=min;
		if(i==0 || number<max)
		{
			max=number;
		}
		*auxMax=max;

		printf("Desea continuar? s/n");
		scanf("%d",&rta);
	} while (rta!='n');

	return auxFail;
}
