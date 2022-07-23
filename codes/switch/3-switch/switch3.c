#include <ansi_c.h>
#include <utility.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//==============================================================================
//
// Title:		switch3.c
// Purpose:		A short description of the implementation.
//
// Created on:	25/02/2021 at 20:49:37 by Lucas Salles.
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

//#include "switch3.h"

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
	int i, j, k, x=1, y=1, z=1, periodo;
	char loop, letra, primeiro_periodo[5][15], segundo_periodo[5][15], terceiro_periodo[5][15], escolha;
	
printf("==========================================\n");
printf("        BANCO DE DADOS DO PROFESSOR\n");
printf("==========================================\n");
printf("Total de Alunos:\n\n>> 1º Periodo: 5\n>> 2º Periodo: 5\n>> 3º Periodo: 5\n\n");
printf("==========================================\n");
printf("Cadastrar Alunos: >> [ENTER]");
getchar();

// CADASTRO		
printf("\nPRIMEIRO PERIODO\n");
printf("Informe somente o primeiro nome do aluno:\n\n");
	for(i=0; i<5; ++i)
	{
		printf(">> %dº ALUNO:  ", x++);
		scanf("%s", primeiro_periodo[i]);
	}
	
printf("\nSEGUNDO PERIODO:\n");
printf("Informe somente o primeiro nome do aluno:\n\n");
	for(j=0; j<5; ++j)
	{
	  	printf(">> %dº ALUNO:  ", y++);
		scanf("%s", segundo_periodo[j]);
	}
	
printf("\nTERCEIRO PERIODO:\n");
printf("Informe somente o primeiro nome do aluno:\n\n");
	for(k=0; k<5; ++k)
	{
	  	printf(">> %dº ALUNO:  ", z++);
		scanf("%s", terceiro_periodo[k]);
	}
	
printf("==========================================\n");	
printf("Para continuar >> [ENTER]");
getchar();
Cls();    
printf("==========================================");
	
// CONSULTAR RESULTADOS
printf("\n>> CONSULTAR BANCO DE DADOS <<\n\n");
printf("  --> [s] para consultar\n  --> [Outra tecla] para fechar\n\n");
printf(">> ");
scanf("%c", &escolha);
escolha = toupper(escolha);
if(escolha=='S'){
	do{
	printf("==========================================\n"); 
	printf("Selecione o periodo que deseja consultar:\n\n");
	printf("- Primeiro Periodo => 1\n- Segundo Periodo  => 2\n- Terceiro Periodo => 3\n\n");
	printf(">> ");
	scanf("%d", &periodo);
	getchar();
	printf("==========================================\n");
		switch(periodo)
		{
			case 1: {
				printf(">> PRIMEIRO PERIODO:\n\n");
				for(i=0; i<5; ++i)
				printf("ALUNOS: %s\n", primeiro_periodo[i]);
					}; break;
		
			case 2: {
				printf(">> SEGUNDO PERIODO:\n\n");
				for(j=0; j<5; ++j)
				printf("ALUNOS: %s\n", segundo_periodo[j]);
					}; break;
		
			case 3: {
				printf(">> TERCEIRO PERIODO:\n\n");                
				for(k=0; k<5; ++k)                 	        
	        	printf("ALUNOS: %s\n", terceiro_periodo[k]);
					}; break;
		
			default: printf("ERRO: Valor Inválido");
		}
	printf("\n==========================================\n");
	printf("Deseja repetir o processo?\n\n");
	printf(" --> [s] para SIM\n --> [Outra tecla] para NAO\n\n");
	printf(">> ");
	scanf("%c", &loop);
	getchar();
	loop = toupper(loop);
	Cls();
	}while(loop=='S');
}
else exit(0);
return 0;
}
