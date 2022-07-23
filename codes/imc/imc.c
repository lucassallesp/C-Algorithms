#include <utility.h>
#include <ansi_c.h>
//==============================================================================
//
// Title:		imc.c
// Purpose:		A short description of the implementation.
//
// Created on:	01/12/2020 at 00:04:04 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "imc.h"

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
int main()
{
	float altura, massa, imc;
	char letra;
	letra= 's';
		while (letra=='s')
	{
		printf("======================================\n");
		printf("    ESSE PROGRAMA CALCULA O IMC\n");
		printf("======================================\n");
		printf("                ---\n");
		
		
		printf("======================================\n");
		printf("    DIGITE SUA MASSA EM QUILOGRAMA: \n");
		printf("======================================\n");
		scanf("%f", &massa);
		getchar();
		printf("======================================\n");
		printf("    DIGITE A SUA ALTURA EM METROS: \n");
		printf("======================================\n");
		scanf("%f", &altura);
		getchar();
		
		imc = massa / (altura*altura);
		printf("======================================\n");
		printf("     SEU IMC É:  <<%f>>\n", imc);
		printf("======================================\n");
		printf("                ---\n"); 
		
		printf("======================================\n");
		printf("        <RESULTADO/SITUAÇÃO>\n");
		printf("======================================\n\n");
		if (imc<17) printf("    Você está muito abaixo do peso \n\n");
		else if ((imc>=17) && (imc<=18.49)) printf("    Você está abaixo do peso \n\n");
		else if ((imc>=18.5) && (imc<=24.99)) printf("      Você está com peso normal \n\n");
		else if ((imc>=25) && (imc<=29.99)) printf("       Você está acima do peso \n\n");
		else if ((imc>=30) && (imc<=34.99)) printf("    Seu estado é de obesidade I \n\n");
		else if ((imc>=35) && (imc<=39.99)) printf("    Seu estado é de obeisdade II \n\n");
		else if (imc>40) printf("    Seu estado é de obesidade III \n\n");
		
		printf("======================================\n");
		printf("     DESEJA REPETIR O PROCESSO?\n");
		printf("======================================\n"); 
		printf("\nSE SIM, DIGITE [s]\n\nSE NÃO, DIGITE QUALQUER OUTRA TECLA\n");
		scanf("%c", &letra);
		Cls();
		
	}
	
	getchar();	
	 return 0;
}
