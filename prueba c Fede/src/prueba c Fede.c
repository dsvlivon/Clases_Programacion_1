/*
 ============================================================================
 Name        : prueba.c
 Author      : Daniel S. Vizgarra Livón
 Version     :
 Copyright   : th
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fede.h"

int main(void)
{
	int numeroA=1, numeroB=2;
	int resultado = fede(numeroA, numeroB);

	printf("resultado: %d", resultado);
}

