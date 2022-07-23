#include <ansi_c.h>
#include <utility.h>
#include <math.h>
//==============================================================================
//
// Title:		switch2.c
// Purpose:		A short description of the implementation.
//
// Created on:	25/02/2021 at 18:18:01 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "switch2.h"

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
int Define_Your_Functions_Here (int x)
{
	return x;
}

int main()
{
	
	float n, resto;
	char loop, opcao, opcao2;
	
do{ 
printf("==================================================\n");
printf("   ESSE PROGRAMA EXIBE SE O NÚMERO DIGITADO É:\n");
printf("==================================================\n");
printf("\n- POSITIVO\n- NEGATIVO\n- ZERO\n- PAR\n- IMPAR\n");
printf("\n==================================================\n");

//Execução:
printf(">> Digite um número:\t");
scanf("%f", &n);
getchar();

	//Verifica se o numero é positivo, negativo ou zero
	if(n<0) opcao='n';
	else if(n>0) opcao='p';
	else if(n==0) opcao='z';
	
	//Verifica se o numero é par ou impar
	resto = fmod(n,2);
	if(resto==0) opcao2='p';
	else opcao2='i';

//Resultados:
	switch(opcao)
	{
		case 'n': printf("\n\t  << Esse número é NEGATIVO >>\n"); break;
		case 'p': printf("\n\t  << Esse número é POSITIVO >>\n"); break;
		case 'z': printf("\n\t  << Esse número é ZERO >>\n"); break;
	}
	
	switch(opcao2)
	{
		case 'p': printf("\t  << E também é PAR >>\n"); break;
		case 'i': printf("\t  << E também é IMPAR >>\n"); break;
	}
	
printf("\n==================================================\n");
printf(">> ENTER para continuar\t");
GetKey();
printf("\n==================================================");
printf("\n\nDESEJA REINICIAR O PROGRAMA?\n\n");
printf(">> Digite:\n\t[S] para reiniciar\n\t[Outra tecla] para finalizar\n");
printf(">>  ");
scanf("%c", &loop);
getchar();
loop=toupper(loop);
Cls();
}while(loop=='S');
	
return 0;
}

