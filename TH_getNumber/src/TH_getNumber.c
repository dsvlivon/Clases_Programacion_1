/*
 ============================================================================
 Name        : TH_getNumber.c
 Author      : Daniel
 Version     :
 Copyright   : TH
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "th.h"

int utn_getNumero(int *auxNumber,int Max,int Min, int loop)
{
	int number,i;
	int fail=-1; // zsentencia de error

	for(i=0;i<loop;i++)
	{// pedido
		printf("Ingrese un número: ");
		scanf("%d",&number);
		// validacion
		if(number>=Min && number<=Max)
		{// si numero OK
			*auxNumber = number;
			//return 0;
			fail=0;//
			break;
		}
		else
			printf("Error");
	}

	return fail;
}
