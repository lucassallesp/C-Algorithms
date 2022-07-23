//==============================================================================
//
// Title:		impares.c
// Purpose:		A short description of the implementation.
//
// Created on:	18/11/2020 at 16:09:08 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "impares.h"

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
		int n=0,y=0,z;  //n => Numero de termos, y => Termo da sequência (1º, 2º,3º...), z => Valor do termo impar indicado em "y".
		char letra;		// letra => Armazena o character que indica se o programa deve ser repetido.
		
		letra= 's';
		while(letra=='s')
		{
		
			do{
				Cls();
				printf("=======================================\n");
				printf("ESSE PROGRAMA EXIBE OS N-TERMOS IMPARES\n");
				printf("=======================================\n");
				printf("Digite o valor de N:\n");
				scanf("%d", &n);
				getchar();
	
			}while (n<=0);
		
			for(z=1;z<=2*n;z=z+2)
			{
		  	y++;
			printf("O %do termo é: %d\n",y,z);
			}
	
			printf("\nDeseja repetir o procedimento?\n\n  << Se sim, digite [s] >>\n\n  << Se não, digite qualquer outra tecla >>\n\n ");
			scanf("%c", &letra);
			y=0;
		}
  	   return 1;

}
