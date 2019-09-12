/*
 * arrayFunctions.h
 *
 *  Created on: 11 sep. 2019
 *      Author: Daniel
 */
#include "validations.h"
#include "arrayFunctions.h"
#include "profile.h"

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAIL -1


int initArrayInt(int array[],int limit,int value )
{
	int i;
	int auxReturn = EXIT_FAIL;
	if(array != NULL && limit > 0)
	{
		auxReturn = 0;
		for(i=0;i<limit;i++)
		{
			array[i]=value+i;
		}

	}
	return auxReturn;
}
////////////////////////////////////////////
int printArrayInt(int array[],int limit )
{
	int i;
	int auxReturn = EXIT_FAIL;
	if(array != NULL && limit > 0)
	{
		auxReturn = 0;
		printf("\n\n-------\n");
		for(i=0;i<limit;i++)
		{
			printf("%d\n",array[i]);
		}
	}
	return auxReturn;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int getArrayInt(int array[],int limit,char *pMsg,char *pMsgFail,int minus,int maximus,int try)
{
	int i=0;
	int buffer;
	char answer = 'n';
	int auxReturn = EXIT_FAIL;
	if(array != NULL && limit > 0)
	{
		do
		{
			if(getInt(&buffer,pMsg,pMsgFail,minus,maximus,try) == 0)
			{
				array[i] = buffer;
				i++;
				limit--;
			}
			printf("Continuar? (s/n)");
			fflush(stdin);
			scanf("%c",&answer);
		}while(answer == 's' && limit > 0);
		auxReturn = i;
	}
	return auxReturn;
}
//////////////////////////////////////////////////////////
int maxArrayInt(int array[],int limit,int *pResult)
{
	int i;
	int auxReturn = EXIT_FAIL;
	int maximus;
	int posMax;
	if(array != NULL && limit > 0)
	{
		auxReturn = 0;
		maximus = array[0];
		posMax = 0;
		for(i=1;i<limit; i++)
		{
			if(array[i]>maximus)
			{
				maximus = array[i];
				posMax=i;
			}
		}
		*pResult = posMax;
	}
	return auxReturn;
}
///////////////////////////////////////////
int orderArrayInt(int array[],int limit)
{
	int i;
	int auxReturn = EXIT_FAIL;
	int posMax;
	int auxiliar;
	if(array != NULL && limit > 0)
	{
		for(i=0;i<limit;i++)
		{
			maxArrayInt(array+i,limit-1,&posMax);
			auxiliar = array[i];
			array[i]=array[posMax+i];
			array[posMax+i] = auxiliar;
		}
	}
	return auxReturn;
}
////////////////////////////////////////////
int averageArrayInt(int array[],int limit)
{
    int i;
	int auxReturn = EXIT_FAIL;
	float acumulator=0;

    if(array != NULL && limit > 0)
	{
        for(i=0;i<limit;i++)
        {
            acumulator=acumulator+array[i];
            auxReturn=0;
        }
        printf("\nEl acumulado es: %f",acumulator);
        printf("\nEl promedio es: %f",acumulator/i);
    }
    return auxReturn;
}
//////////////////////////////////////////////
int maxAndMinArray(int array[],int limit)
{
    int i;
	int auxReturn = EXIT_FAIL;
	float maximus, minus;

    if(array != NULL && limit > 0)
	{
        for(i=0;i<limit;i++)
        {
            if(i==0 || array[i]> maximus)
            {
                maximus = array[i];
            }
            if(i==0 || array[i]< minus)
            {
                minus = array[i];
            }
        }
        printf("\nEl maximo es: %f",maximus);
        printf("\nEl minimo es: %f",minus);
    }
    return auxReturn;
}
//////////////////////////////////////
/*
int orderArray(int*pArray, int limite)
flag=1,i,retorno;

while (flag==1)
{
    flag=0;
    for (i=0;i<(limite-1);i++)
    {
        if (array[i]>pArray[i+1])
        {
            aux=pArray[i];
            pArray[i]=pArray[i+1];
            pArray[i+1]=aux;
            flag=1;
        }
    }
    return retorno;
}
*/
