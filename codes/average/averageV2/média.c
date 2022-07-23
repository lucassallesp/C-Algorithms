//==============================================================================
//
// Title:		m�dia.c
// Purpose:		A short description of the implementation.
//
// Created on:	17/11/2020 at 21:45:47 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "m�dia.h"

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions

/// HIFN  What does your function do?
/// HIPAR x/What inputs does your function expect?
/// HIRET What does your function return?
#include <utility.h>
#include <ansi_c.h>
#include <cvirte.h>
#include <stdlib.h>

int main ()
{

	int valor1,valor2,valor3,valor4, valor5;
	float resto1, resto2, resto3, resto4, resto5;
	
	printf("----------------------------------------------------------------\n");
	printf("ESSE PROGRAMA CALCULA A M�DIA ARITM�TICA DOS 5 N�MEROS DIGITADOS\n");
	printf("----------------------------------------------------------------\n"); 
	
	printf("DIGITE O PRIMEIRO N�MERO:\n");
	scanf("%d",&valor1);
	getchar();
	
	printf("DIGITE O SEGUNDO N�MERO:\n");
	scanf("%d",&valor2);
	getchar();
	
	printf("DIGITE O TERCEIRO N�MERO:\n");
	scanf("%d",&valor3);
	getchar();
	
	printf("DIGITE O QUARTO N�MERO:\n");
	scanf("%d",&valor4);
	getchar();
	
	printf("DIGITE O QUINTO N�MERO:\n");
	scanf("%d",&valor5);
	getchar();
	
	printf("A M�DIA �:\t%f\n\n", (float)((valor1+valor2+valor3+valor4+valor5)/5.0));
	
	resto1= valor1 % 5;
	resto2= valor2 % 5; 
	resto3= valor3 % 5; 
	resto4= valor4 % 5; 
	resto5= valor5 % 5; 
	
	if(resto1==0) printf("O PRIMEIRO NUMERO � MULTIPLO DE 5\n");
	if(resto2==0) printf("O SEGUNDO NUMERO � MULTIPLO DE 5\n");
	if(resto3==0) printf("O TERCEIRO NUMERO � MULTIPLO DE 5\n");
	if(resto4==0) printf("O QUARTO NUMERO � MULTIPLO DE 5\n");
	if(resto5==0) printf("O QUINTO NUMERO � MULTIPLO DE 5\n");
															  
	GetKey();

	return 0;
}
