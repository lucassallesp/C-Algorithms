#include <ansi_c.h>
#include <utility.h>
//==============================================================================
//
// Title:		switch1.c
// Purpose:		A short description of the implementation.
//
// Created on:	25/02/2021 at 17:15:44 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "switch1.h"

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
	float n;
	char loop, opcao;
	
do{ 
printf("==================================================\n");
printf("   ESSE PROGRAMA EXIBE SE O NÚMERO DIGITADO É:\n");
printf("==================================================\n");
printf("\n- POSITIVO\n- NEGATIVO\n- ZERO\n");
printf("\n==================================================\n");

//Execução:
printf("Digite um número:\t");
scanf("%f", &n);
getchar();

	if(n<0) opcao='n';
	else if(n>0) opcao='p';
	else if(n==0) opcao='z';
	
	switch(opcao)
	{
		case 'n': printf("\n\t  << Esse número é NEGATIVO >>\n"); break;
		case 'p': printf("\n\t  << Esse número é POSITIVO >>\n"); break;
		case 'z': printf("\n\t  << Esse número é ZERO >>\n"); break;
	}
printf("\n==================================================\n");
printf(">> ENTER para continuar\t");
GetKey();
printf("\n==================================================");
printf("\n\nDESEJA REINICIAR O PROGRAMA?\n\n");
printf(">> Digite:\n\t[S]\t para reiniciar\n\t[Outra tecla] para finalizar\n");
printf(">> ");
scanf("%c", &loop);
getchar();
Cls();
loop=toupper(loop);
}while(loop=='S');
	
return 0;
}

