/*
 ============================================================================
 Name        : CLASE.c
 Author      : Daniel S. Vizgarra Livón
 Version     :
 Copyright   : th
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "validations.h"
#include "arrayFunctions.h"
#include "profile.h"
#include <stdio.h>
#include <stdlib.h>
#define QTY_EMPLEADOS 10

int main(void)
{
	int edadesEmpleados[QTY_EMPLEADOS];
    int qtyEmployes;
	int test;
	int cantidadDatos;
	cantidadDatos = getArrayInt(edadesEmpleados,QTY_EMPLEADOS,"Edad?\n","Error\n",0,200,2);
	printf("¿Que cantidad de empleados va a ingresar?");
	scanf("%d",&qtyEmployes);


	if(qtyEmployes > 0)
	{
		getEdad(edadesEmpleados,QTY_EMPLEADOS);
		PromedioArrayInt(edadesEmpleados,QTY_EMPLEADOS);
		ordenarArrayInt(edadesEmpleados,cantidadDatos);
		imprimeArrayInt(edadesEmpleados,cantidadDatos);
		maximoYminimoArray(edadesEmpleados,QTY_EMPLEADOS);
		/*
		if (initArrayInt(edadesEmpleados,QTY_EMPLEADOS,120) == 0)
			{
				imprimeArrayInt(edadesEmpleados,QTY_EMPLEADOS);
			}*/
	}

	return 0;
}

