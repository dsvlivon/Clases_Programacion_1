/*
 ============================================================================
 Name        : clase.c
 Author      : dv
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getInt(	int *pResultado,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reintentos);

int main(void)
{
	int numero;

	if(getInt(&numero, "ingrese numero","numero invalido",0,100,2)==0);
	return EXIT_SUCCESS;
}

int getInt(	int *pResultado,char *pMensaje,char *pMensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = 0;
	int i;
	int buffer;

	char input[50];
	int length;
	int j;

	//printf("%s",pMensaje);
	//fflush(stdin);


	for(j=0;j<reintentos;j++)
	{
		printf("%s",pMensaje);
		fgets(input, sizeof(input), stdin);
		length = strlen (input);
		input[length-1]='\0';
		length --;
		retorno = 0;

		for(i=0;i<length;i++)
		{
			if(input[i] < '0' || input[i] > '9')
			{
				retorno = -1;
				break;
			}
		}
		buffer = atoi(input);
		if(retorno==0 && buffer >= minimo && buffer <= maximo)
		{
			*pResultado = buffer;
			break;
		}
		else

	}
	return retorno;
}


