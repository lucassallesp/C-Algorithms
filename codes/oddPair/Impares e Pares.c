#include <utility.h>
#include <ansi_c.h>

//==============================================================================
//
// Title:		Impares e Pares.c
// Purpose:		A short description of the implementation.
//
// Created on:	30/11/2020 at 21:15:17 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "Impares e Pares.h"

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


#include <utility.h>
#include <ansi_c.h>
#include <cvirte.h>

int main()
{
		int n=0,y=0,z;
		char letra;
		
		letra= 's';
		while(letra=='s')
		{
		
			do{
				Cls();
				printf("===============================================\n");
				printf("ESSE PROGRAMA EXIBE OS N-TERMOS IMPARES E PARES\n");
				printf("===============================================\n");
				printf("Digite o valor de N:\n");
				scanf("%d", &n);
				getchar();
	
			}while (n<=0);
		
			for(z=1;z<=n;z++)
			{
		 	y++; printf("O %do termo é: %d\n",y,z);}
	
			printf("\nDeseja repetir o procedimento?\n\n  << Se sim, digite [s] >>\n\n  << Se não, digite qualquer outra tecla >>\n\n ");
			scanf("%c", &letra);
			y=0;
		}
  	   return 1;

}
